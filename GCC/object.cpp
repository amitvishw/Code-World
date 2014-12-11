/*this code add values of variables existing in two diffrent objects and stores in another object of that class*/
#include<iostream>
using namespace std;
class num
{
	int a;
	int b;
	public:
		void get();
		void show();
		void add(num,num);
};
void num::get()
{
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
}
void num::show()
{
	cout<<"\na="<<a<<"\nb="<<b;
}
void num::add(num obj1,num obj2)
{
	a=obj1.a+obj2.a;
	b=obj1.b+obj2.b;
}
int main()
{
	num obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3.add(obj1,obj2);
	obj3.show();
	return 0;
}
