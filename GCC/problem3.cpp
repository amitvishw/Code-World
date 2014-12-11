#include<iostream>
#include<cstring>
using namespace std;
int subarray(char a[],char b[])
{
	int i,j=0;
	for(i=0;i<10&&j<5;i++)
	{
		if(a[i]==b[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
	}
	return j;
}
int main()
{
	char a[10],b[5],t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<subarray(a,b)<<"\n";
	}
	return 0;
}
