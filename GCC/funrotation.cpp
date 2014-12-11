#include<iostream>
using namespace std;
int main()
{
	int start,end,d,i,n,r,count=0,a[100];
	cin>>n;
	cout<<"+++++\n";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"+++++\n";
	cin>>d;
	cin>>r;
	cout<<"+++++\n";
	start=d+1;
	end=n-d+1;
	i=start;
	do
	{
		if(i>n)
		{
			i=1;
		}
		i++;
		count+=1;
		if(count==r)
		{
			cout<<a[i];
			break;
		}
		
	}while(i!=end);
	
	return 0;
}
