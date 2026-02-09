# Install script for directory: /home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/install/rt1_assignment2")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/rt1_assignment2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/msg" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_type_description/rt1_assignment2/msg/Info.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_type_description/rt1_assignment2/srv/SetThreshold.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_type_description/rt1_assignment2/srv/GetAvgVel.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_c/rt1_assignment2/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_typesupport_fastrtps_c/rt1_assignment2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_cpp/rt1_assignment2/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_typesupport_fastrtps_cpp/rt1_assignment2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_typesupport_introspection_c/rt1_assignment2/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rt1_assignment2/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_typesupport_introspection_cpp/rt1_assignment2/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2-0.0.0-py3.12.egg-info" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_python/rt1_assignment2/rt1_assignment2.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_py/rt1_assignment2/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/install/rt1_assignment2/lib/python3.12/site-packages/rt1_assignment2"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2" TYPE MODULE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_py/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/rt1_assignment2_s__rosidl_typesupport_fastrtps_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2" TYPE MODULE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_py/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/rt1_assignment2_s__rosidl_typesupport_introspection_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2" TYPE MODULE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_generator_py/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/rt1_assignment2/rt1_assignment2_s__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/rt1_assignment2_s__rosidl_typesupport_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/librt1_assignment2__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so"
         OLD_RPATH "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librt1_assignment2__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/msg" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_adapter/rt1_assignment2/msg/Info.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_adapter/rt1_assignment2/srv/SetThreshold.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_adapter/rt1_assignment2/srv/GetAvgVel.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/msg" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/msg/Info.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/srv/SetThreshold.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/srv" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/srv/GetAvgVel.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rt1_assignment2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rt1_assignment2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/environment" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_index/share/ament_index/resource_index/packages/rt1_assignment2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cppExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cppExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/rt1_assignment2__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/rt1_assignment2__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_pyExport.cmake"
         "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake/export_rt1_assignment2__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/Export/87d0178067d2aa26de75062faa84de59/export_rt1_assignment2__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/cmake" TYPE FILE FILES
    "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_core/rt1_assignment2Config.cmake"
    "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/ament_cmake_core/rt1_assignment2Config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2" TYPE FILE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2" TYPE EXECUTABLE FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/safety_controller")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2/safety_controller")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/CMakeFiles/safety_controller.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2" TYPE PROGRAM RENAME "user_interface" FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/scripts/user_interface.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rt1_assignment2" TYPE PROGRAM RENAME "input_controller" FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/scripts/input_controller.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rt1_assignment2/" TYPE DIRECTORY FILES "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/ros2_ws/src/rt1_assignment2/launch")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/rt1_assignment2__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ertoto/Documenti/GitHub/Mazzotta_RT1_Lab2/build/rt1_assignment2/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
