#include <iostream>
#include <ostream>
#include "vector_ops.hpp" 
int main()
{
    std::cout<<"执行归一化测试\n";
    Vector a=create_vector(3);
 
    fuzhi(a);
    int m=normalize(a);
    std::cout<<"向量状态为:"<< m<<"\n";
    if(m==-1)
    {
        std::cout<<"向量长度为0,无法归一化\n";
    }
    else
    {
        std::cout<<"归一化结果为:"<<a<<"\n";
    }
    
}
