#include <iostream>
#include <ostream>
#include "vector_ops.hpp" 

int main()
{   std::cout<<"执行减法测试\n";
    Vector a,b,c,d,f,g;
    a=create_vector(3);
    b=create_vector(4);
    c=create_vector(3);
    std::cout<<"请输入a的元素:\n";
    fuzhi(a);
    std::cout<<"请输入b的元素:\n";
    fuzhi(b);
    std::cout<<"请输入c的元素:\n";
    fuzhi(c);
    std::cout<<"对于a-b:\n";
    d=subtract(a,b);
    std::cout<<"a-b="<< d<<"\n";
    std::cout<<"对于c-a:\n";
    f=subtract(c,a);
    std::cout<<"c-a="<< f<<"\n";
    std::vector<Vector> v;

}