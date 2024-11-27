#include<iostream>


class stringg
{
public:
    char * data;
    size_t n;
    size_t rong;
    stringg() :rong(16)
    {  data=new char[rong];
       //data=nullptr;
       n=0;
    }
    stringg(int a):rong(16)
    {   data=new char[rong];
        n=a;
        
    }
    
    stringg(const char *str) :rong(16)
    {   int i=0;
        data=new char[rong];
        while(1)
        {   if((str+i)==nullptr)
        {
            break;
        }
            *(data+i)=*(str+i);
            i++;
        }
        n=i;

    }
    stringg(const stringg& other) :rong(16)
    {
        data=new char[rong];
        data=other.data;
        n=other.n;
    }
    stringg(stringg&& other) noexcept :rong(16)
    {   data=new char[rong];
        data=other.data;
        other.data=nullptr;
        n=other.n;
        other.n=0;
    }
    
    stringg& operator=(const stringg& other);
    stringg& operator=(stringg&& other) noexcept;
    stringg operator+(const stringg& other) const;
    char& operator[](size_t index);
    const char& operator[](size_t index) const;
    size_t size() const;
    size_t capacity() const;
    void insert(size_t pos, const stringg& str);
    friend std::ostream& operator<<(std::ostream& os, const stringg& str);
    friend std::istream& operator>>(std::istream& is, stringg& str);
    operator const char*() const;
    stringg clone() const;
    
 


};
void fuzhi(stringg &a);


