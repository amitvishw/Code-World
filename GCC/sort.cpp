#include<iostream>
using namespace std;
int main()
{
	int a[1000009],b[1000009],i,h,t,l,j=0,min;
	cin>>t;
	while(t--)
	{
		cin>>l;
		for(i=0;i<l;i++)
		{
			cin>>a[i];
		}
		min=a[0];
		for(h=0;h<l;h++)		
		{		
			for(i=0;i<l;i++)
			{
				if(a[i]<min)
				{
					min=a[i];	
				}
			}
			b[j]=min;
			j++;
		}
		for(j=0;j<l;j++)
		{
			cout<<b[j]<<" ";	
		}
	}
	return 0;

}
