#include<iostream>
using namespace std;
class Number
{
private:
int n1,n2,sum,sub,multi,div,c;
public:
void get();
void show();
};
void Number::get()
{
cout<<"enter two numbers \n";
cin>>n1>>n2;
}
void Number::show()
{
cout<<"1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n";
cout<<"Enter the number to perform\n";
cin>>c;
switch
{
case (1);
{
cout<<n1+n2;
}
case (2);
{
cout<<n1-n2;
}
case (3);
{
cout<<n1*n2;
}
case (4);
{
cout<<n1/n2;
}
default;
{
cout<<"invalid choice";
}
}
void main()
{
Number m;
m.get();
m.show();
getch();
}
