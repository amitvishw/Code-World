#include<iostream>
using namespace std;
int largest(int ,int ,int);
int largest(int nos[],int l,int num)
{
	int i;	
	for(i=0;i<l;i++)
	{
		if(nos[i]>num)
		{
			num=nos[i];
		}
	}
	return num;
}
int smallest(int ,int ,int);
int smallest(int nos[],int l,int num)
{
	int i;
	for(i=0;i<l;i++)
	{
		if(nos[i]<num)
		{
			num=nos[i];
		}
	}
	return num;
}
int main()
{
	int i,nos[1000009],l,num;
	cout<<"Enter number of elements:";
	cin>>l;
	cout<<"Enter "<<l<<" integers:";
	for(i=0;i<l;i++)
	{
		cin>>nos[i];
	}
	num=nos[0];
	cout<<"Largest numbers is:"<<largest(nos,l,num);
	cout<<"\nSmallest number is:"<<smallest(nos,l,num);
	return 0;
}

