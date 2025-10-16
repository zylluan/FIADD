cmake_minimum_required(VERSION 3.5)
project(spoofing_attack)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(px4_msgs REQUIRED)

add_executable(fake_gps_node src/fake_gps_node.cpp)
ament_target_dependencies(fake_gps_node rclcpp px4_msgs)

install(TARGETS
  fake_gps_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()

