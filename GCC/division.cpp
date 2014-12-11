#include<iostream>
using namespace std;
float div(float a,float b);
float div(float a,float b)
{	
	if(a==0)
	{
		return 0;
	}
	else
	{
		return 1/b+div(a-1,b);
	}
}
int main()
{
	float a,b;
	while(1)
	{
		cin>>a;
		cin>>b;
		cout<<div(a,b)<<"\n";
	}
	return 0;
}
