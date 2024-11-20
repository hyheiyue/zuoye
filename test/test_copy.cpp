#include <iostream>
#include <ostream>
#include "vector_ops.hpp" 
int main()
{
    std::cout<<"测试向量拷贝\n";
    Vector a=create_vector(3);
    std::cout<<"请输入a的元素:\n";
    fuzhi(a);
    Vector b=copy_vector(a);
    std::cout<<"拷贝成功！\n";
    std::cout<<"a="<<a<<"\n";
    
    std::cout<<"b="<<b<<"\n";
}