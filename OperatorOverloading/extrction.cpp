#include<iostream>

class demo
{
    public:
    int a;
    int b,c;
    demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
    friend std::istream& operator>>(std::istream&,demo&);
};

std::istream& operator>>(std::istream&in,demo& other)
{
    in >> other.a;
    in >> other.b ;
    in >> other.c ;
    return in;
}
int main()
{
    demo d1(10,20,30);
    std::cin >> d1;
    std::cout<<d1.a<<d1.b<<d1.c;
    
}