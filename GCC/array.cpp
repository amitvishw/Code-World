#include<iostream>
using namespace std;
void insert();
void insert()
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
}
void dlt();
void dlt()
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
int main()
{
	int c;	
	c=0;
	do
	{	
		cout<<"to add press 1\nto delete press 2\nPress 3 to quit\n";
		cin>>c;
		switch(c)
		{
			case 1:
			insert();
			break;
			case 2:
			dlt();
			break;
			case 3:
			break;
			default:
			cout<<"Enter Only Given Choices\n";
		}
	}
	while(c != 3);
	return 0;
}
