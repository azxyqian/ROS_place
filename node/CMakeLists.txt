cmake_minimum_required(VERSION 3.8)
project(ros2_cpp)
add_executable(ros2_cpp_node ros2_cpp_node.cpp)

find_package(rclcpp REQUIRED)#查找到rclcpp包
#message("rclcpp include dirs: ${rclcpp_INCLUDE_DIRS}")
#message("rclcpp libraries: ${rclcpp_LIBRARIES}")
target_link_libraries(ros2_cpp_node ${rclcpp_LIBRARIES})#链接rclcpp库
target_include_directories(ros2_cpp_node PUBLIC ${rclcpp_INCLUDE_DIRS})#包含rclcpp头文件路径
