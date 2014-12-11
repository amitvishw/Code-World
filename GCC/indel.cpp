#include<iostream>
using namespace std;
/*int main()
{
	int a[100],j,num,temp,i,k,l,loc;
	cin>>l;
	k=l;
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cin>>num>>loc;
	loc=loc-1;
	while(l>=loc)
	{
		a[l+1]=a[l];
		l--;	
	}
	a[loc]=num;
	for(i=0;i<k+1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
}*/
int main()
{
	int a[100],i,k,loc,l;
	cin>>l;	
	k=l;
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cin>>loc;
	loc=loc-1;
	i=loc;
	while(i<=l)
	{
		a[i]=a[i+1];
		i++;
	}
	for(i=0;i<k-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	
}
