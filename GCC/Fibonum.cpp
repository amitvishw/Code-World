#include<iostream>
using namespace std;
int main()
{
	long long int sum=0,a=1,b=1;
	int n,t,i,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		for(i=0;i<100;i++)
		{
			if(i<=1)
			{
				sum=1;
			}
			else
			{
				sum=a+b;
				a=b;
				b=sum;
			}
			if(n==sum)
			{
				flag=1;
				break;
			}		
		}
		if(flag==0)
		{
			cout<<"No\n";
		}
		else
		{
			cout<<"Yes\n";
		}
		sum=0;
		a=1;
		b=1;
	}
	return 0;
}
