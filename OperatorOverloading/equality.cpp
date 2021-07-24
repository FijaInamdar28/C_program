#include<iostream>

class demo
{
    public:
    int a,b,c;

    demo(int a,int b,int c )
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
    int operator==(demo& rhs)
    {
    return((this->a==rhs.a)&&
    (this->b==rhs.b)&&
    (this->c==rhs.c));
    }
};
int main()
{
    demo d1(10,20,30);
    demo d2(40,50,60);
    if(d1==d2)
    {
        std::cout<<"---equal---"<<std::endl;

    }
    else 
    {
        std::cout<<"---Not equal---"<<std::endl;

    }
    return 0;
}

