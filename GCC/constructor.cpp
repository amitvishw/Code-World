#include<conio.h>
#include<iostream.h>
class number
{
public:
int a,b;
number();
number(int x,int y);
number(number & x);
void show();
};
number::number();
{
a=0;
b=0;
}
number::number(int x,int y)
{
x=a;
y=b;
}
number::number(number & x)
{
a=x.a;
b=x.b;
}
void number::show()
{
cout<<"a="<<a<<"\nb="<<b;
}


void main()
{ 
number obj;
obj.show();
}

