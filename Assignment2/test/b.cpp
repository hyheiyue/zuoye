#include"stringg.hpp"
int main()
{
    stringg a,c,d,e,f,g;
    fuzhi(a);
    stringg b(a);
    e=a;
   
    std::cout<<b<<"\n";
    std::cout<<e<<"\n";
     c=a+b;
    d=a=c;
    std::cout<<c<<"\n";
    fuzhi(g);
    std::cout<<d;
    d.insert(2,g);
    std::cout<<d;

}