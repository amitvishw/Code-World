#include<iostream>
using namespace std;
int main()
{
	int n,i,j,t,f;
 	cin>>t;
	for(j=0;j<t;j++)
	{  
		f=0;		
		cin>>n;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"PRIME";
		}
		else
		{
			cout<<"NOT PRIME";
		}
	}
	return 0;
}
