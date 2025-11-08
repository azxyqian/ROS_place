#include "rclcpp/rclcpp.hpp"

class PersonNode : public rclcpp::Node //继承自rclcpp::Node
{
    private:
        std::string name_;
        int age_;

    public:
        PersonNode(const std::string &node_name,const std::string &name, const int &age):Node(node_name)//构造调用父类的构造函数，等同于python中的super()   

        {
            this->name_ = name;//this指的是当前对象，即PersonNode对象
            this->age_ = age;

        };

        void eat(const std::string &food_name)//const不允许用户修改内部参数,静态引用（相当于指针）可以不用复制，节省内存
        {
            RCLCPP_INFO(this->get_logger(), "我是%s,%d岁,正在吃%s", this->name_.c_str(), this->age_, food_name.c_str());

        };

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PersonNode>("person_node", "张三", 25);//创建PersonNode对象
    node-> eat("apple");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
};