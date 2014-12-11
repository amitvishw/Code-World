#include<iostream>
using namespace std;
int main()
{
	int a[100009],b[100009],n,t,k,i,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=0;i<20;i++)
		{
			cout<<b[i]<<"+";
		}
		cout<<"\n";
		i=0;
		while(count<=k)
		{
			if(b[i]!=0)
			{
				count++;
			}
			b[i]=0;
			i++;
		}
		cout<<i-1;
	}
	return 0;
}
