#include <iostream>
#include <ostream>
#include "vector_ops.hpp" 
int main()
{
    std::cout<<"执行模长测试\n";
    Vector a=create_vector(3);
    fuzhi(a);
    std::cout<<"a的模长为:"<<magnitude(a)<<"\n";
}