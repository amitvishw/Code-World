#include <iostream>
using namespace std;
int main()
{
	int n,sum,i,r,t,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(i=n+1;i<=99999;i++)
		{
			p=i;
			while(p!=0)
			{
				r=p%10;
				sum=sum*10+r;
				p=p/10;
			}
			if(i==sum)
			{
				cout<<sum<<"\n";
				sum=0;
				break;
			}
			sum=0;
		}
	}
	return 0;
}
