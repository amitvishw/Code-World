#include<iostream>
using namespace std;
int main()
{
	int i,j=0,k,n,max=0,t;
	cin>>t;
	while(t--)
	{
		int a[10009]={0};
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>k;
			a[k]++;
		}
		for(i=0;i<10009;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				j=i;
			}
		}
		printf("%d %d",j,max);
		j=0;
	}
}
