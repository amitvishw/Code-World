#include<iostream>
using namespace std;
int gcd(int a, int b);
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main()
{
	int t,i,a,b,g;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		g=gcd(a,b);
		cout<<g<<"\n";
	}
	return 0;
}
