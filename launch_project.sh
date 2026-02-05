#!/bin/bash

source /opt/ros/jazzy/setup.bash

source "$(dirname "$0")/ros2_ws/install/setup.bash"

ros2 launch rt1_assignment2 assignment2.launch.py
