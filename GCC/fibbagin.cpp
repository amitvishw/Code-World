#include<iostream>
using namespace std;
int main()
{
	long long int c=1,d=1,temp,sum=0,sum2=0,m=1000000007;
	int t,a,b,i;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		for(i=1;i<=b;i++)
		{
			if(i==1||i==2)
			sum=1;
			else
			{			
				sum=(c%m+d%m)%m;
				c=d;
				d=sum;
			}
			if(i>=a)
			{
				sum2=sum2+sum;
			}
		}
		sum2=sum2%m;
		cout<<sum2<<"\n";
		c=1;
		d=1;
		sum=0;
		sum2=0;
	}
	return 0;
}
