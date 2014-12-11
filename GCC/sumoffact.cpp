#include<iostream>
using namespace std;
int main()
{
	long long int a,sum=0,i,t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				sum+=i;
			}
		}
		cout<<sum<<"\n";
		sum=0;
	}
}
