#include<iostream>
using namespace std;
int main()
{
	int a[30]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418};
	int n,i,t,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		for(i=0;i<27;i++)
		{
			if(n==a[i])
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
	}
	return 0;
}
