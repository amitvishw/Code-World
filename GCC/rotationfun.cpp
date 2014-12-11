#include<iostream>
using namespace std;
int main()
{
	int a[1000009],i,temp,n,j,m,d;
	char q;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		cin>>q;
		cin>>d;
		if(q=='R')
		{
			cout<<a[d-1]<<"\n";
		}
		else
		{
			if(q=='C')
			{
				for(j=0;j<d;j++)
				{
      					temp = a[0];
      					for(i=0;i<n;i++)
         				a[i] = a[i+1];
      					a[n-1] = temp;
  				}
			}
			else
			{
				for(j=0;j<d;j++)
   				{
      					temp=a[n-1];
      					for(i=n-1;i>0;i--)
        				{
						a[i] = a[i-1];
					}
      					a[0] = temp;  
   				}
			}
		}
	}
	return 0;
}
