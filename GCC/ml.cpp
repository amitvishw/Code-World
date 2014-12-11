#include<iostream.h>
#include<conio.h>
class m
{
public:
int m;
void get_m();
void show_m();
};
void m::get_m()
{cin>>m;
}
void m::show_m()
{
cout<<"\nm="m;
}
class n:public m
{ 
public:
int n;
void get_n();
void show_n();
};
class o:public n
{
public:
int o;
void get_o();
void show_n();
};
void mian();
{
n.obj;


}

