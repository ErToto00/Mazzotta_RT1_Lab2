#!/bin/bash

# Source ROS2 (assuming Jazzy based on logs, fallback to others if needed, but hardcoding for this system)
source /opt/ros/jazzy/setup.bash

# Source the local workspace
# Script is expected to be in /home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/
# Workspace is in ./ros2_ws
source "$(dirname "$0")/ros2_ws/install/setup.bash"

# Launch the project
ros2 launch rt1_assignment2 assignment2.launch.py
