#include<iostream>
using namespace std;
int main()
{
	int a[1009][1009],i,j,k,l;
	cin>>l;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			cin>>a[i][j];		
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			cout<<a[i][j];		
		}
		cout<<"\n";
	}
	return 0;
	
}
