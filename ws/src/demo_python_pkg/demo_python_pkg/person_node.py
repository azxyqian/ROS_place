import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self,node_name: str, name: str, age_value: int) -> None:
        super().__init__(node_name)
        self.name = name
        self.age = age_value
    def eat(self,food_name: str):
        """
        模拟吃东西的行为
        """
        #print(f'{self.name},{self.age} is eating {food_name}')
        self.get_logger().info(f'{self.name},{self.age} is eating {food_name}')


def main():
    rclpy.init()
    node = PersonNode('zhangsan','法外狂徒张三',18)
    node.eat('烤鸭')
    rclpy.spin(node)
    rclpy.shutdown()