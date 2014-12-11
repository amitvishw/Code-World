#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,l,u,s,n,r,i,count=0,k,flag,j;
	cin>>t;
	while(t--)
	{
		cin>>l>>u;
		for(i=l;i<u+1;i++)
		{
			s=0;
			n=i;
			while(n)
			{
				s=s+n%10;
				n=n/10;
			}
			flag=0;
			for(j=2;j<=sqrt(s);j++)
			{
				if(s==1)
				{
					break;
				}
				
				if(s%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				count++;
			}
			flag=0;
		}
		cout<<count;
		count=0;
	}
	return 0;
}
