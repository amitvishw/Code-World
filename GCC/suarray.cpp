#include<stdio.h>
#include<iostream>
using namespace std;
int count=-1;
int overflow(int len);
int isempty();
int push(int *a,int n,int len);
int push(int *a,int n,int len)
{	
	if(overflow(len))
	{
		count++;
		a[count]=n;
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(count==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int overflow(int len)
{
	if(count==len-1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int pop()
{
	if(isempty())
	{
		return 0;
	}
	else
	{
		count--;
		return 1;
	}
}
void display(int *a)
{
	int i;
	cout<<"\n";
	if(count==-1)
	{
		cout<<"EMPTY";
	}
	else
	{
		for(int i=count;i>=0;i--)
		{
			printf("%d\n",a[i]);
		}
	}
}
int main()
{
	int a[10],i,j,k,l;
	
	while(1)
	{cin>>i;	
	switch(i)
	{
		case 1:
			cout<<"PUSH\n";
			cin>>k;
			if(push(a,k,10))
			{
				cout<<"ADDED";	
			}
			else
			{
				cout<<"FULL";
			}
			display(a);
			break;
		case 2:
			cout<<"POP\n";			
			if(pop())
			{
				cout<<"DELETED";
			}
			else
			{
				cout<<"EMPTY";
			}
			display(a);
			break;
		case 3:
			cout<<"PRINT\n";
			display(a);
			break;
	}}
	return 0;
}
