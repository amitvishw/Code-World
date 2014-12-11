#include <iostream>
using namespace std;
int main()
{
	int a[109],count=0,i,n,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		for(i=0;i<n;i++)
		{
			if(a[i]<a[k-1])
			{
				count++;
			}
		}
		cout<<count+1<<"\n";
		count=0;
	}
	return 0;
}
