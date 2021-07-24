#include<iostream>

class demo
{
public:

int a;
int b;
int c;

demo(int a,int b,int c)
{
this->a=a;
this->b=b;
this->c=c;
}


demo& operator+ (demo& obj)
{
demo*objptr = (demo*)malloc(sizeof(demo));
objptr->a=this->a + obj.a;
objptr->b=this->b + obj.b;
objptr->c=this->c + obj.c;
return *objptr;
}
};
int main()
{
demo d1(10,20,30);
demo d2(40,50,60);
demo d3 = d1+d2;
std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<d1.c<<std::endl;
std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<d2.c<<std::endl;
std::cout<<d3.a<<std::endl<<d3.b<<std::endl<<d3.c<<std::endl;
}


