cmake_minimum_required(VERSION 3.5)
project(my_uav)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(
  DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)
install(
  DIRECTORY models/
  DESTINATION share/${PROJECT_NAME}/models
)
install(
  DIRECTORY worlds/
  DESTINATION share/${PROJECT_NAME}/worlds
)

install(
  PROGRAMS
  scripts/my_python_node.py  # 指定 Python 脚本
  DESTINATION lib/${PROJECT_NAME}  # 安装到 ROS2 可执行路径
)


find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(uav_control_node src/uav_control_node.cpp)
ament_target_dependencies(uav_control_node rclcpp sensor_msgs std_msgs)
install(TARGETS uav_control_node DESTINATION lib/${PROJECT_NAME})


#加模型节点需要的配置
find_package(cpr REQUIRED)
find_package(nlohmann_json REQUIRED)

add_executable(internlm_m_node src/internlm_m_node.cpp)
target_link_libraries(internlm_m_node
  cpr::cpr
)
ament_target_dependencies(internlm_m_node rclcpp sensor_msgs std_msgs)
install(TARGETS internlm_m_node DESTINATION lib/${PROJECT_NAME})

#加internvl
add_executable(internvl src/internvl.cpp)
target_link_libraries(internvl
  cpr::cpr
)
ament_target_dependencies(internvl rclcpp sensor_msgs std_msgs)
install(TARGETS internvl DESTINATION lib/${PROJECT_NAME})

#加internlm_m_listener
#先要找到px4_msgs， 告诉 CMake 找到 px4_msgs 包，并导入它的依赖信息
find_package(px4_msgs REQUIRED)
add_executable(internlm_m_listener src/internlm_m_listener.cpp)
target_link_libraries(internlm_m_listener
  cpr::cpr
)
ament_target_dependencies(internlm_m_listener rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS internlm_m_listener DESTINATION lib/${PROJECT_NAME})

# 图片订阅 处理 大模型
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
add_executable(internvl_listener src/internvl_listener.cpp)
target_link_libraries(internvl_listener
  cpr::cpr
)
target_link_libraries(internvl_listener
  ${OpenCV_LIBS}
  ${cv_bridge_LIBRARIES}
)
ament_target_dependencies(internvl_listener rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS internvl_listener DESTINATION lib/${PROJECT_NAME})

add_executable(internvl_p 
	src/internvl_p.cpp
	)
target_link_libraries(internvl_p
  cpr::cpr
)
target_link_libraries(internvl_p
  ${OpenCV_LIBS}
  ${cv_bridge_LIBRARIES}
)
ament_target_dependencies(internvl_p rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS internvl_p DESTINATION lib/${PROJECT_NAME})

add_executable(qwen_p 
	src/Qwen.cpp)
target_link_libraries(qwen_p
  cpr::cpr
)
target_link_libraries(qwen_p
  ${OpenCV_LIBS}
  ${cv_bridge_LIBRARIES}
)
ament_target_dependencies(qwen_p rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS qwen_p DESTINATION lib/${PROJECT_NAME})



# image_sub.cpp ray_sub.cpp gps_sub.cpp
add_executable(image_sub src/image_sub.cpp)
target_link_libraries(image_sub
  cpr::cpr
)
target_link_libraries(image_sub
  ${OpenCV_LIBS}
  ${cv_bridge_LIBRARIES}
)
ament_target_dependencies(image_sub rclcpp sensor_msgs std_msgs)
install(TARGETS image_sub DESTINATION lib/${PROJECT_NAME})


add_executable(gps_sub src/gps_sub.cpp)
target_link_libraries(gps_sub
  cpr::cpr
)
ament_target_dependencies(gps_sub rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS gps_sub DESTINATION lib/${PROJECT_NAME})



add_executable(ray_sub src/ray_sub.cpp)
target_link_libraries(ray_sub
  cpr::cpr
)
ament_target_dependencies(ray_sub rclcpp sensor_msgs std_msgs)
install(TARGETS ray_sub DESTINATION lib/${PROJECT_NAME})

#加 camera_listener.cpp
add_executable(camera_listener src/camera_listener.cpp)
ament_target_dependencies(camera_listener rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS camera_listener DESTINATION lib/${PROJECT_NAME})

#加 ray_listener.cpp
add_executable(ray_listener src/ray_listener.cpp)
ament_target_dependencies(ray_listener rclcpp sensor_msgs std_msgs px4_msgs)
install(TARGETS ray_listener DESTINATION lib/${PROJECT_NAME})





ament_package()
