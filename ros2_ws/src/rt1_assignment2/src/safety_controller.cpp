#include <memory>
#include <deque>
#include <numeric>
#include <string>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
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

    // Services
    set_thresh_srv_ = this->create_service<rt1_assignment2::srv::SetThreshold>(
      "set_threshold", std::bind(&SafetyController::set_thresh_callback, this, _1, _2));
    get_avg_srv_ = this->create_service<rt1_assignment2::srv::GetAvgVel>(
      "get_avg_vel", std::bind(&SafetyController::get_avg_callback, this, _1, _2));

    RCLCPP_INFO(this->get_logger(), "Safety Controller Node Started. Default Threshold: %.2f", threshold_);
  }

private:
  void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
  {
    
    int n_ranges = msg->ranges.size();
    int one_third = n_ranges / 3;
        
    float min_dist = 100.0;
    std::string direction = "none";
    
    // Check Right (start of array)
    float min_r = 100.0;
    for(int i=0; i < one_third; i++) {
        if(msg->ranges[i] < min_r) min_r = msg->ranges[i];
    }
    
    // Check Front (middle)
    float min_f = 100.0;
    for(int i=one_third; i < 2*one_third; i++) {
        if(msg->ranges[i] < min_f) min_f = msg->ranges[i];
    }
    
    // Check Left (end)
    float min_l = 100.0;
    for(int i=2*one_third; i < n_ranges; i++) {
        if(msg->ranges[i] < min_l) min_l = msg->ranges[i];
    }
    
    // Determine closest
    if (min_r < min_f && min_r < min_l) {
        min_dist = min_r;
        direction = "right";
    } else if (min_f < min_r && min_f < min_l) {
        min_dist = min_f;
        direction = "front";
    } else {
        min_dist = min_l;
        direction = "left";
    }
    
    // Publish Info
    auto info_msg = rt1_assignment2::msg::Info();
    info_msg.distance = min_dist;
    info_msg.direction = direction;
    info_msg.threshold = threshold_;
    info_pub_->publish(info_msg);
    
    // Safety Logic
    if (min_dist < threshold_) {
        // Too close! Move "back" by reversing the linear velocity.
        
        geometry_msgs::msg::Twist safety_cmd;
        safety_cmd.linear.x = -0.5; // Back up
        safety_cmd.angular.z = 0.0;
        cmd_pub_->publish(safety_cmd);
        
        safety_active_ = true;
    } else {
        safety_active_ = false;
    }
  }

  void input_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
  {
    // Buffer velocity
    if (vel_buffer_.size() >= 5) {
        vel_buffer_.pop_front();
    }
    vel_buffer_.push_back(*msg);
    
    // If safety active, ignore input
    // If safety NOT active, pass through
    if (!safety_active_) {
        cmd_pub_->publish(*msg);
    }
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
  rclcpp::Service<rt1_assignment2::srv::SetThreshold>::SharedPtr set_thresh_srv_;
  rclcpp::Service<rt1_assignment2::srv::GetAvgVel>::SharedPtr get_avg_srv_;
  
  float threshold_;
  bool safety_active_ = false;
  std::deque<geometry_msgs::msg::Twist> vel_buffer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SafetyController>());
  rclcpp::shutdown();
  return 0;
}
