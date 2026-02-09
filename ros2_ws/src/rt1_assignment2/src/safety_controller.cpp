#include <memory>
#include <deque>
#include <numeric>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "rt1_assignment2/msg/info.hpp"
#include "rt1_assignment2/srv/set_threshold.hpp"
#include "rt1_assignment2/srv/get_avg_vel.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class SafetyController : public rclcpp::Node
{
public:
  SafetyController()
  : Node("safety_controller"), threshold_(0.5) // Default threshold
  {
    // Publishers
    cmd_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    info_pub_ = this->create_publisher<rt1_assignment2::msg::Info>("/info", 10);

    // Subscribers
    scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
      "/scan", 10, std::bind(&SafetyController::scan_callback, this, _1));
    input_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
      "/cmd_vel_in", 10, std::bind(&SafetyController::input_callback, this, _1));
    odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odom", 10, std::bind(&SafetyController::odom_callback, this, _1));

    // Services
    set_thresh_srv_ = this->create_service<rt1_assignment2::srv::SetThreshold>(
      "set_threshold", std::bind(&SafetyController::set_thresh_callback, this, _1, _2));
    get_avg_srv_ = this->create_service<rt1_assignment2::srv::GetAvgVel>(
      "get_avg_vel", std::bind(&SafetyController::get_avg_callback, this, _1, _2));

    // Open log file
    char* home_dir = std::getenv("HOME");
    std::string log_path = std::string(home_dir) + "/robot_pos_log.txt";
    log_file_.open(log_path, std::ios::app);
    
    if (log_file_.is_open()) {
        RCLCPP_INFO(this->get_logger(), "Logging robot positions to %s", log_path.c_str());
        log_file_ << "--- New Session ---\n" << std::flush;
    } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to open log file at %s", log_path.c_str());
    }

    RCLCPP_INFO(this->get_logger(), "Safety Controller Node Started. Default Threshold: %.2f", threshold_);
  }

  ~SafetyController() {
      if (log_file_.is_open()) {
          log_file_.close();
      }
  }

private:
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
      current_pose_ = msg->pose.pose;
  }

  void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
  {
    
    static bool logged_scan_info = false;
    if (!logged_scan_info) {
        RCLCPP_INFO(this->get_logger(), "Scan Info: Angle Min: %.2f, Max: %.2f, Inc: %.2f, Size: %zu", 
            msg->angle_min, msg->angle_max, msg->angle_increment, msg->ranges.size());
        logged_scan_info = true;
    }

    size_t n_ranges = msg->ranges.size();
    int one_third = n_ranges / 3;
        
    // Find global minimum and its index
    float min_dist = 100.0;
    int min_index = -1;
    std::string direction = "none";

    for (size_t i = 0; i < n_ranges; ++i) {
        if (msg->ranges[i] < min_dist) {
            min_dist = msg->ranges[i];
            min_index = i;
        }
    }

    // Calculate Angle of the closest obstacle
    // Assumes standard ROS REP 103: x forward, y left, z up. Angle 0 is forward.
    float obs_angle = msg->angle_min + min_index * msg->angle_increment;

    // Determine direction string for info (Approximate sectors for display)
    // Normalizing angle to be safe (though usually within -PI to PI)
    // Front: -PI/4 to +PI/4 (approx)? Or stick to previous 1/3 logic mapping?
    // Let's stick to the previous Sector logic only for the "direction" string 
    // to maintain consistency with what the user might expect in the Info message,
    // OR update it to be more accurate based on angle. 
    // Previous logic: Right (start), Front (mid), Left (end).
    // If we assume a 180-270 deg scanner centered on front:
    // Index 0 -> Right, Mid -> Front, End -> Left.
    // The previous implementation mapped specific indices to min_r, min_f, min_l.
    // I will preserve the "info" logic loosely by checking sector indices again OR
    // just use the angle to set the string.
    
    if (min_index < one_third) direction = "right";
    else if (min_index < 2*one_third) direction = "front";
    else direction = "left";
    
    min_dist_ = min_dist;

    // Update last safe state if we are safely away from threshold
    if (min_dist > threshold_ + 0.1) {
        last_safe_pose_ = current_pose_;
    }

    // Publish Info
    auto info_msg = rt1_assignment2::msg::Info();
    info_msg.distance = min_dist;
    info_msg.direction = direction;
    info_msg.threshold = threshold_;
    info_pub_->publish(info_msg);
    
    // Safety Logic
    if (min_dist < threshold_ && !reversing_) {
        // Trigger Safety Mode
        reversing_ = true;
        RCLCPP_WARN(this->get_logger(), "Threshold breached! Closest Obs Angle: %.2f. Reversing...", obs_angle);
    }

    if (reversing_) {
        // Calculate distance to last safe pose
        double dx = current_pose_.position.x - last_safe_pose_.position.x;
        double dy = current_pose_.position.y - last_safe_pose_.position.y;
        double dist = std::sqrt(dx*dx + dy*dy);

        // Tolerance to consider "reached" (e.g., 1cm)
        if (dist < 0.01) {
            reversing_ = false;
            geometry_msgs::msg::Twist stop_cmd;
            cmd_pub_->publish(stop_cmd);
            RCLCPP_INFO(this->get_logger(), "Safety maneuver complete. Resuming normal operation.");
        } else {
             // Execute maneuver:
             // Move AWAY from obstacle.
             // Front arc (-PI/2 to PI/2): Move Backward (negative linear.x)
             // Back arc: Move Forward (positive linear.x)
             
            geometry_msgs::msg::Twist safety_cmd;
            double speed_mag = std::abs(last_input_vel_.linear.x);
             if (speed_mag == 0.0) speed_mag = 0.5; // Fallback

            // Check if obstacle is in front (abs(angle) < 90 deg)
            if (std::abs(obs_angle) < 1.5708) {
                safety_cmd.linear.x = -speed_mag; // Go Back
            } else {
                safety_cmd.linear.x = speed_mag;  // Go Forward
            }
            
            safety_cmd.angular.z = last_input_vel_.angular.z;
            cmd_pub_->publish(safety_cmd);
        }
    }
  }

  void input_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
  {
    // If reversing, ignore inputs
    if (reversing_) {
        return;
    }

    // Create a modified message that ignores lateral movement (holonomic)
    auto clean_msg = *msg;
    clean_msg.linear.y = 0.0;

    // Buffer velocity
    if (vel_buffer_.size() >= 5) {
        vel_buffer_.pop_front();
    }
    vel_buffer_.push_back(clean_msg);
    
    // Log Position
    if (log_file_.is_open()) {
        log_file_ << "Input received. Pos: x=" << current_pose_.position.x 
                  << ", y=" << current_pose_.position.y 
                  << ", theta (z-orient)=" << current_pose_.orientation.z << std::endl;
    }

    // Update last input vel
    last_input_vel_ = clean_msg;

    cmd_pub_->publish(clean_msg);
  }

  void set_thresh_callback(const std::shared_ptr<rt1_assignment2::srv::SetThreshold::Request> request,
                           std::shared_ptr<rt1_assignment2::srv::SetThreshold::Response> response)
  {
    threshold_ = request->input;
    response->success = true;
    RCLCPP_INFO(this->get_logger(), "Threshold updated to: %.2f", threshold_);
  }

  void get_avg_callback(const std::shared_ptr<rt1_assignment2::srv::GetAvgVel::Request> /*request*/,
                        std::shared_ptr<rt1_assignment2::srv::GetAvgVel::Response> response)
  {
    if (vel_buffer_.empty()) {
        response->avg_linear = 0.0;
        response->avg_angular = 0.0;
        return;
    }

    float sum_linear = 0.0;
    float sum_angular = 0.0;
    
    for (const auto& vel : vel_buffer_) {
        sum_linear += vel.linear.x;
        sum_angular += vel.angular.z;
    }
    
    response->avg_linear = sum_linear / vel_buffer_.size();
    response->avg_angular = sum_angular / vel_buffer_.size();
  }

  // Members
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_;
  rclcpp::Publisher<rt1_assignment2::msg::Info>::SharedPtr info_pub_;
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr input_sub_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
  
  rclcpp::Service<rt1_assignment2::srv::SetThreshold>::SharedPtr set_thresh_srv_;
  rclcpp::Service<rt1_assignment2::srv::GetAvgVel>::SharedPtr get_avg_srv_;
  
  float threshold_;
  float min_dist_ = 100.0;
  bool reversing_ = false;
  std::deque<geometry_msgs::msg::Twist> vel_buffer_;
  
  geometry_msgs::msg::Pose current_pose_;
  geometry_msgs::msg::Pose last_safe_pose_;
  geometry_msgs::msg::Twist last_input_vel_;
  
  std::ofstream log_file_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SafetyController>());
  rclcpp::shutdown();
  return 0;
}
