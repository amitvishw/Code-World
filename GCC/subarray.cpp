#include<iostream>
using namespace std;
int main()
{
	int a[100009],i,max=0,t,l;
	cin>>t;
	while(t--)
	{
		cin>>l;
		for(i=0;i<l;i++)
		{
			cin>>a[i];
			if(max<a[i])
				max=a[i];
		}
		cout<<max;
		max=0;
	}
	
	return 0;
}
