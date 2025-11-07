#include <iostream>

int main(int argc, char *argv[]) //argc参数表示传递给程序的参数数量，argv参数表示传递给程序的参数数组
{
    std::cout << "参数数量为：" << argc << std::endl;
    std::cout << "参数为：" << argv[0] << std::endl;
    std::string arg1 = argv[1];
    if(arg1 == "--help")
    {
        std::cout << "帮助文档，但是无用" << std::endl;
    }
    return 0;
}