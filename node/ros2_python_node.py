import rclpy # Import the ROS 2 Python client library
from rclpy.node import Node # Import the Node class from rclpy

def main():
    rclpy.init() # 初始化工作
    node = Node('python_node') # 创建节点
    node.get_logger().info('Hello ROS 2 Python Node!') # 打印日志信息
    node.get_logger().warn('This is a warning message') # 打印警告信息  
    rclpy.spin(node) # 保持节点运行
    rclpy.shutdown() # 关闭节点

if __name__ == '__main__':#这里是判断是否是主函数，如果是，则执行main函数
    main()