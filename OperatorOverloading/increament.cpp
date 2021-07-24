#include<iostream>

class demo
{
    public:
    int a,b,c;

    demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
    demo& operator++()
    {
        (this->a)++;
        (this->b)++;
        (this->c)++;
        return(*this);
   }
   demo& operator++(int x)
   {
        demo *y= this;
        ++(this->a);
        ++(this->b);
        ++(this->c);

        return *y;
   }
    friend std::ostream& operator<<(std::ostream& out,demo& other);

};
std::ostream& operator<<(std::ostream& out,demo& other)
{
    out<<other.a<<"\t";
    out<<other.b<<"\t";
    out<<other.c<<"\t";
    return out;
}
int main()
{
    demo d1(10,20,30);
    demo d2=d1++;
    demo d3=++d1;
    std::cout<<d1<<d2<<d3;
    return 0;
}