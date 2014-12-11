#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,l,n1,n2,j,flag=0,i,c=0;
	cin>>t;
	for(l=0;l<t;l++)
	{
		cin>>n1>>n2;
		if(n1==1)
		{
			n1+=1;
		}	
		for(i=n1;i<=n2;i++)
		{		
			if(i!=1&&i!=2&&i%2==0||i!=3&&i%3==0||i!=5&&i%5==0||i!=7&&i%7==0||i!=11&&i%11==0||i!=13&&i%13==0||i!=17&&i%17==0||i!=19&&i%				19==0||i!=23&&i%23==0||i!=29&&i%29==0)			
			{
				flag=1;
			}
			else
			{
				for(j=2;j<=sqrt(i);j++)
				{
					if(i%j==0)
					{
						flag=1;
						break;
					}
				}
			}				
			
			if(flag==0)
			{
				c++;
			}
				flag=0;
		}
		cout<<c<<"\n";
		c=0;
	}
	
	return 0;
}
