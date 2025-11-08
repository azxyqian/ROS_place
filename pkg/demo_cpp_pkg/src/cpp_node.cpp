#include <iostream>
#include "rclcpp/rclcpp.hpp" //包含ROS 2 C++客户端库的头文件
int main(int argc, char *argv[]) //argc参数表示传递给程序的参数数量，argv参数表示传递给程序的参数数组
{
    rclcpp::init(argc, argv); //初始化ROS 2
    auto node = std::make_shared<rclcpp::Node>("cpp_node"); //创建节点
    RCLCPP_INFO(node->get_logger(), "Hello, ROS 2 from C++!"); //打印日志信息
    rclcpp::spin(node); //阻塞等待ROS 2节点退出
    rclcpp::shutdown(); //关闭ROS 2
    return 0;
}