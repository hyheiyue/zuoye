#include <iostream>
#include <vector>
#include <cmath>
#include <ostream>
#include "vector_ops.hpp"


Vector create_vector(size_t n)
{   
    Vector a;
    a.dimension = n;
    a.data = new float[n];
    for (int i= 0;i < n; i++)
    {
        a.data[i] = 0;
    } 
    return a;
}
void destroy_vector(Vector& a)
{
    delete[] a.data;
}
Vector add(const Vector& a, const Vector& b)
{   Vector x;
    if (a.dimension !=b.dimension)
    {
        std::cout<<"向量维度不匹配\n";
        return x;
    }
    Vector c = create_vector(a.dimension);
    for (int i=0; i< a.dimension;i++)
    {
        c.data[i]=a.data[i]+ b.data[i];
    }
    std::cout<<"向量维度匹配\n";
    return c;
}
Vector subtract(const Vector& a, const Vector& b)
{   Vector x;
    if (a.dimension != b.dimension)
    {
        std::cout<<"向量维度不匹配\n";
        return x;
    }
    Vector c = create_vector(a.dimension);
    for (int i= 0;i < a.dimension; i++)
    {
        c.data[i]=a.data[i]-b.data[i];
    }
    std::cout<<"向量维度匹配\n";
    return c;
}
float dot_product(const Vector& a, const Vector& b)
{   
    if (a.dimension != b.dimension)
    {
        std::cout << "向量维度不匹配\n";
        return 0;
    }
    float c = 0;
    for (int i = 0; i < a.dimension; ++i)
    {
        c = a.data[i] * b.data[i]+c;
    }
    return c;

}
float magnitude(const Vector& a)
{
    float c,d;
    for (int i = 0; i < a.dimension; ++i)
    {
        c=a.data[i]*a.data[i]+c;
    }
    d=std::sqrt(c);
    return d;
}
int normalize(Vector& a)  // 修改传入的向量，返回状态值。正常返回 0，错误返回 -1
{
    float c=magnitude(a);
    if(c==0)
    {
        return -1;
    }
    int sum=0;
    for (int i = 0; i < a.dimension; ++i)
    {
       if(a.data[i]==0)
       {
        sum++;
       }
    }
    if(sum==a.dimension)
    {
        return -1;
    }
    for (int i = 0; i < a.dimension; ++i)
    {
       a.data[i]=a.data[i]/c;
    }

    return 0;
}
Vector cross_product(const Vector& a, const Vector& b)  // 三维向量叉乘
{   Vector x;
    if(a.dimension!=b.dimension||a.dimension!=3||b.dimension!=3)
    {
        if(a.dimension!=b.dimension)
        {
            std::cout << "向量维度不匹配\n";
            return x;
        }
        if(a.dimension!=3||b.dimension!=3)
        {
            std::cout<<"有一个向量不是三维向量\n";
            std::cout<<"第一个向量是"<<a.dimension<<"维向量\n";
            std::cout<<"第二个向量是"<<b.dimension<<"维向量\n";
            return x;
        }
    }
    Vector c=create_vector(a.dimension);;
    
    c.data[0]=a.data[1]*b.data[2]-a.data[2]*b.data[1];
    c.data[1]=a.data[2]*b.data[0]-a.data[0]*b.data[2];
    c.data[2]=a.data[0]*b.data[1]-a.data[2]*b.data[0];
    return c;
    
}
Vector copy_vector(const Vector& a)  // 向量拷贝
{
    Vector c = create_vector(a.dimension);
    for (int i = 0; i < a.dimension; ++i)
    {
        c.data[i] = a.data[i];
    }
    return c;
}




std::ostream &operator<<(std::ostream &os, const Vector &a)
{   
    if (a.dimension == 0)
    {
        os << "这是一个空向量";
        return os;
    }
    os << "(";

    for (int i = 0; i < a.dimension - 1; ++i)
    {
        os << a.data[i] << ",";
    }
    os << a.data[a.dimension - 1];
    os << ")";
    return os;
}
void fuzhi(Vector&a)
{
    for(int i = 0; i < a.dimension; ++i)
    {   float m;
        std::cout<<"请输入向量的第"<<i+1<<"个元素\n";
        std::cin>>m;
        a.data[i]=m;
    }
    return;
}
