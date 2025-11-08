import rclpy
from rclpy.node import Node
from demo_python_pkg.person_node import PersonNode

class WriterNode(PersonNode):
    def __init__(self,node_name:str,name:str,age_value:int,book:str) -> None:
        print('WriterNode 构造函数被调用')
        super().__init__(node_name,name,age_value)# 调用父类的构造函数
        self.book = book

def main():
    rclpy.init()
    node = WriterNode('writer_node','张三',18,'《Python编程从入门到实践》')
    node.eat('火锅')
    rclpy.spin(node)
    rclpy.shutdown()