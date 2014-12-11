#include<iostream>
using namespace std;
int main()
{
	int a[1000009],k,r,t,i;
	cin>>t;
	while(t--)
	{
		r=103993%33102;
		cin>>k;
		if(k==0)
		{
			cout<<3<<"\n";
		}
		else
		{
			for(i=0;i<k;i++)
			{
				r=r*10;
				a[i]=r/33102;
				r=r%33102;
			}
			for(i=0;i<k;i++)
			{
				if(i==0)
				cout<<"3.";
				cout<<a[i];
			}
			cout<<"\n";
		}
	}
}
