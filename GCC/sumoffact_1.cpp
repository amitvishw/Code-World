#include<iostream>
using namespace std;
int main()
{
	long long int a,sum=1,i,t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		if(a%2==0)
		{
			for(i=2;i<=a;i++)
			{
				if(a%i==0)
				{
					sum+=i;
				}
				i+=1;
			}
		}
		else
		{
			for(i=3;i<=a;i++)
			{
				if(a%i==0)
				{
					sum+=i;
				}
				i+=1;
			}
		}
		cout<<sum<<"\n";
		sum=1;
	}
	return 0;
}
