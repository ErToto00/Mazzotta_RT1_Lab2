from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, Shutdown
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    return LaunchDescription([
        # Safety Controller (runs in the main background terminal)
        Node(
            package='rt1_assignment2',
            executable='safety_controller',
            name='safety_controller',
            output='screen'
        ),
        
        # User Interface (Python) - Needs a new terminal for input
        Node(
            package='rt1_assignment2',
            executable='user_interface',
            name='user_interface',
            prefix='gnome-terminal --wait --', # Using gnome-terminal based on system check
            output='screen'
        ),
        
        # Input Controller - Needs a new terminal for input
        Node(
            package='rt1_assignment2',
            executable='input_controller',
            name='input_controller',
            prefix='gnome-terminal --wait --', 
            remappings=[('/cmd_vel', '/cmd_vel_in')],
            output='screen'
        ),

        # Gazebo Simulation
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('bme_gazebo_sensors'), 'launch', 'spawn_robot.launch.py')
            ]),
        ),
    ])
