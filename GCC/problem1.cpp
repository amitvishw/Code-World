#include<iostream>
using namespace std;
int reverse(int a)
{
	int r,sum=0;
	while(a!=0)
	{
		r=a%10;
		sum=sum*10+r;
		a=a/10;
	}
	return sum;
}
int main()
{
	int n,a,b;
	cin>>n;
	while(n--)	
	{
		cin>>a>>b;
		a=reverse(a)+reverse(b);
		cout<<reverse(a)<<"\n";
	}
	return 0;
}
