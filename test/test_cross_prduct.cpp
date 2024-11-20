#include <iostream>
#include <ostream>
#include "vector_ops.hpp" 
int main()
{   std::cout<<"测试叉乘\n";
    Vector a = create_vector(3);
    Vector b = create_vector(3);
    std::cout<<"请输入a的元素:\n";
    fuzhi(a);
    std::cout<<"请输入b的元素:\n";
    fuzhi(b);
    Vector c = cross_product(a,b);
    std::cout<<"axb="<<c<<"\n";
    
}
