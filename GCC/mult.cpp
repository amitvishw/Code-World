#include<iostream>
using namespace std;
int mult(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		if(a==0||b==0)
		{
			return 0;
		}
		else
		{
			return a+mult(a,b-1);
		}
	}
}
int main()
{
	float a,b;
	while(1)
	{
		cin>>a;
		cin>>b;
		cout<<mult(a,b)<<"\n";
	}
	return 0;
}
