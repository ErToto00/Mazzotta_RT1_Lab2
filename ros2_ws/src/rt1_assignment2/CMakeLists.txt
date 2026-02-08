cmake_minimum_required(VERSION 3.8)
project(rt1_assignment2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Info.msg"
  "srv/SetThreshold.srv"
  "srv/GetAvgVel.srv"
  DEPENDENCIES std_msgs sensor_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

add_executable(safety_controller src/safety_controller.cpp)
ament_target_dependencies(safety_controller rclcpp std_msgs geometry_msgs sensor_msgs nav_msgs)
rosidl_target_interfaces(safety_controller
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  safety_controller
  DESTINATION lib/${PROJECT_NAME}
)

install(PROGRAMS
  scripts/user_interface.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME user_interface
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)
