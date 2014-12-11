#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[1000];
	int j,l,i,count=0;
	cin>>a;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			if(a[i]=a[j])
			{
				count++;
			}
		}
		cout<<a[j]<<count;
		count=0;
	}
		
}
