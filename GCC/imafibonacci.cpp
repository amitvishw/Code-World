#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597};
	int n,num,i;
	cin>>n;
	while(n--)
	{
		cin>>num;
		int flag=0;
		for(i=0;i<16;i++)
		{
			if(num==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	return 0;
}
