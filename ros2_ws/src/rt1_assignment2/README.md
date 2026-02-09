# RT1 Assignment 2

This ROS 2 package implements a control system for a robot simulation in Gazebo. It includes a safety controller to prevent collisions and a user interface to interact with the system parameters.

## Description

The project consists of two main nodes:
1.  **Safety Controller**: Monitor's the robot's laser scanner to detect obstacles. If an obstacle is detected within a safe distance, it overrides the user's velocity commands to prevent a collision.
2.  **User Interface**: A terminal-based interface to adjust the safety threshold and query average velocity statistics.

## Dependencies

*   ROS 2 (Jazzy)
*   `bme_gazebo_sensors` (Simulation environment)

## Installation

1.  Clone the repository into your ROS 2 workspace `src` folder:
    ```bash
    cd ~/ros2_ws/src
    git clone <repository_url>
    ```

2.  Build the package:
    ```bash
    cd ~/ros2_ws
    colcon build --packages-select rt1_assignment2
    ```

3.  Source the setup file:
    ```bash
    source install/setup.bash
    ```

## Usage

To launch the entire simulation, including the robot, safety controller, user interface, and teleoperation node, run:

```bash
ros2 launch rt1_assignment2 launcher.py
```

This will open:
*   **Gazebo**: The 3D simulation environment.
*   **Main Terminal**: Displays logs from the `safety_controller` and simulation.
*   **Input Controller Terminal**: Allows you to control the robot by entering linear and angular velocities. Positive linear velocity corresponds to a forward movement, while positive angular velocity corresponds to a clockwise rotation. The robot will move for 1 second based on these inputs.
*   **User Interface Terminal**: Provides a menu to interact with the services.

Alternatively, you can run the the **launch_project.sh** file in the root directory of the project.

### User Interface

The User Interface node runs in a separate terminal and offers the following commands:
*   `t`: **Set Threshold**. Enter a new minimum distance (in meters) for the safety controller.
*   `a`: **Get Average Velocity**. Displays the average linear and angular velocity calculated from the last 5 commands.
*   `q`: **Quit**. Closes the interface.

## Nodes

### `input_controller` (Python)
A node that handles user input for controlling the robot.
1.  **Input Logic**:
    Asking the user for a linear and angular velocity. The robot will move for 1 second.
2.  **Safety Monitoring**:
    It subscribes to the `/info` topic. If the distance to an obstacle is less than the threshold, it prevents the robot from moving or stops it immediately. If a step is interrupted by an obstacle, the robot backtracks to its starting position.

### `safety_controller` (C++)
A node that acts as a middleware between the input controller and the robot.

1.  **Safety Logic**: 
    If the robot approaches an obstacle closer than the set threshold (default 0.5m), the controller intervenes. Instead of just stopping, the robot will reverse to its last known safe position. Input from the user is ignored during this maneuver.
    
2.  **Logging**:
    The robot's position is logged to a file named `robot_pos_log.txt` located in the home directory.

*   **Subscribers**:
    *   `/scan` (`sensor_msgs/msg/LaserScan`): Reads laser data to detect obstacles.
    *   `/cmd_vel_in` (`geometry_msgs/msg/Twist`): Receives commands from the `input_controller` node.
    *   `/odom` (`nav_msgs/msg/Odometry`): Monitoring robot position for logging and safety retraction.

*   **Publishers**:
    *   `/cmd_vel` (`geometry_msgs/msg/Twist`): Sends the final safe command to the robot.
    *   `/info` (`rt1_assignment2/msg/Info`): Publishes status information (distance to closest obstacle, direction, current threshold).
*   **Services**:
    *   `set_threshold` (`rt1_assignment2/srv/SetThreshold`): Sets the safety distance threshold.
    *   `get_avg_vel` (`rt1_assignment2/srv/GetAvgVel`): Returns the average velocity of the last few commands.

### `user_interface` (Python)
A client node for interacting with the safety controller.

*   **Clients**:
    *   Call `set_threshold` to update the safety distance.
    *   Calls `get_avg_vel` to retrieve velocity stats.

## Custom Interfaces

### Messages
*   **`Info.msg`**
    *   `float32 distance`: Distance to the closest obstacle.
    *   `string direction`: Direction of the obstacle (front, left, right).
    *   `float32 threshold`: Current active safety threshold.

### Services
*   **`SetThreshold.srv`**
    *   Request: `float32 input` (New threshold value).
    *   Response: `bool success`.
*   **`GetAvgVel.srv`**
    *   Request: Empty.
    *   Response: `float32 avg_linear`, `float32 avg_angular`.
