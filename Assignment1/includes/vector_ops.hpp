#include <iostream>
#include <vector>
#include <cmath>
#include <ostream>
#ifndef VECTOR_OPS_HPP
#define VECTOR_OPS_HPP
struct Vector
{
    size_t dimension;
    float* data;
    Vector()
    {
        dimension = 0;
        data = nullptr;
    }
   
};
Vector create_vector(size_t n);
void destroy_vector(Vector& v);
Vector add(const Vector& a, const Vector& b);
Vector subtract(const Vector& a, const Vector& b);
float dot_product(const Vector& a, const Vector& b);
float magnitude(const Vector& a);
int normalize(Vector& a);  // 修改传入的向量，返回状态值。正常返回 0，错误返回 -1
Vector cross_product(const Vector& a, const Vector& b);  // 三维向量叉乘
Vector copy_vector(const Vector& a);  // 向量拷贝
std::ostream &operator<<(std::ostream&os,const Vector&a);
void fuzhi(Vector&a);
#endif