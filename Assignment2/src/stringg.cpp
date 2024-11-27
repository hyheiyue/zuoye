#include<iostream>
#include "stringg.hpp"


    stringg &stringg:: operator=(const stringg& other)
    {   
    
        delete[] data;         
        rong=other.rong;      
        n=other.n;            
        data = new char[rong];  
        data=other.data;
    
    return *this;
   
    } 
    stringg&stringg:: operator=(stringg&& other) noexcept
    {   
             
        delete[] data;         
        data = other.data;      
        rong = other.rong;      
        n = other.n;            
        other.data = nullptr;  
        other.n = 0;            
    
    return *this; 
    }
  stringg stringg::operator+(const stringg& other) const
    { 
    stringg a; 
    a.n=n+other.n;
    if(a.n>a.rong)
    {
        std::cout<<"超出容量\n";
        a.n=a.rong;
        return a;
    }
    for(int i=0;i<n;i++)
    {
        *(a.data+i)=*(data+i);
    }
    for(int i=0;i<other.n;i++)
    {
        *(a.data+i+n)=*(other.data+i);
    }
    
    return a;
    } 
    char &stringg:: operator[](size_t index)
    {
        static char a;
        a=*(data+index);
        return a;
    }
    const char &stringg:: operator[](size_t index) const
    {
        static const char a=*(data+index);
        
        return a;
    }
    size_t stringg:: size() const
    {
        size_t a;
        a=n;
        return a;

    }
     size_t stringg::capacity() const
    {
        size_t a;
        a=rong;
        return a;
    }
    void stringg::insert(size_t pos, const stringg& str)
    {
        int m=n+str.n;
        if(m>str.rong)
        {
            std::cout<<"超出容量\n";
       
            return ;
        }
        for(int i=pos;i<n;i++)
        {
            *(data+i+str.n)=*(data+i);
        }
        for(int i=pos;i<n;i++)
        {
            *(data+i)=*(str.data+i-pos);
        }
        n=n+str.n;
    }
     std::ostream& operator<<(std::ostream& os, const stringg& str)
    {
        for(int i=0;i<str.rong;i++)
        {
            os<<*(str.data+i);
        }
        return os;
    }
    std::istream& operator>>(std::istream& is, stringg& str)
    {
        for(int i=0;i<str.n;i++)
        {   
            is>>*(str.data+i);
        }
       
        return is;
    }
    stringg::operator const char*() const
    {   const char*a;
        a=data;
        return a;
    }
    stringg stringg::clone() const
    {
        stringg a;
        for(int i=0;i<n;i++)
        {
            *(a.data+i)=*(data+i);
        }
        a.n=n;
        return a;

    }
    void fuzhi(stringg &a)
    {int m;
    std::cout<<"输入字符串的长度\n";   
    std::cin>>m;
    if(m>a.rong)
    {
        std::cout<<"超出容量\n";
        fuzhi(a);
    }
    a.n=m;
    std::cin>>a;
    }




