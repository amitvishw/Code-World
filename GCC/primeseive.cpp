//codechef->medium->Prime Generator
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,t,n,num1,num2,isprime[1000009];
	cin>>t;
	while(t--)
	{
		int isprime[1000009];
		cin>>num1>>num2;
		for(i=2;i<=num2;i++)
		{
			isprime[i]=1;
		}
		isprime[0]=0;
		isprime[1]=0;
		for(i=2;i<=sqrt(num2);i++)
		{
			for(j=2;i*j<=num2;j++)//run time error bcoz i*j become more then size of array
			{
				if(isprime[i]==1)
				{
					isprime[i*j]=0;
				}
			}
		}
		for(i=num1;i<=num2;i++)
		{
			if(isprime[i])
			{
				cout<<i<<"\n";
			}
		}
		cout<<"\n";
		
	}
}

