#include <iostream>                              
using namespace std;
float area(float a,int b ,int c)
{
	return a*b*c;
}
float area(int a,int b)
{
	return a*b;
}
float area(int a)
{
	return a*a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"T="<<area(0.5,a,b);
	cout<<"\nR="<<area(a,b);
	cout<<"\nS"<<area(a);
	
	return 0;
}
