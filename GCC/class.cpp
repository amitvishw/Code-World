#include<iostream>
using namespace std;
class shotu
{
	public: 
	int a,b,c;
	void GETDATA();
	void CAL();
	void SHOW();
};
void shotu::GETDATA()
{
	cin>>a>>b;
}
void shotu::CAL()
{
	c=a+b;
}
void shotu::SHOW()
{
	cout<<c<<"\n";
}
int main()
{
	shotu one;
	one.GETDATA();
	one.CAL();
	one.SHOW();
	return 0;
}
