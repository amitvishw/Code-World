#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,count,sum,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=1;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count=0;
				while(n%i==0)
				{
					n=n/i;
					count++;
				}
			}
			cout<<count<<"+"<<i<<"\n";
			sum=sum*(count+1);
		}
		cout<<n;
		if(n!=0)
		{
			cout<<n<<"+"<<1<<"\n";
			sum=sum*2;	
		}
		cout<<sum<<"\n";
		sum=1;
	}
	return 0;
}
