#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,l,u,s,n,r,i,count=0,k,flag;
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
			for(k=2;k<=sqrt(s);k++)
			{
				if(s%k==0)
				{
					flag=1;
					cout<<s<<"flag=1\n";
					break;
				}
			}
			if(flag==0)
			{
				count++;
				cout<<s<<"flag=0+\n";
			}
			
			cout<<count;
			count=0;
		}
	}
	return 0;
}
