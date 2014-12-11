#include<iostream>
using namespace std;
int insert(int ,int);
int insert(int a[],int l)
{
	int num,temp,i,k,loc;
	printf("Enter the Location Where Number To Be Inserted:");
	scanf("%d",&loc);
	if(loc<=l)
	{
	printf("Enter the number:");
	scanf("%d",&num);
	k=l;
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
	else
	{
		if(l>)
	{
		printf("Array is full!");
	}
	
}
/*int dlt(int ,int ,int );
int dlt(int a[],int l,int loc)
{
	/*int a[100],i,k,loc,l;
	
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
	
}*/
int main()
{
	int a[100],i,l;
	printf("Enter Number of element:");
	cin>>l;
	printf("Enter %d Numbers:",l);	
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	insert(a,l);
}

