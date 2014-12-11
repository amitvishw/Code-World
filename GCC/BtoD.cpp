#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	printf("AS");	
	int d,t,r,i=0;
	char a[40];
	long long int sum=0;
	cin>>t;
	while(t--)
	{
		cin>>a;
		d=strlen(a);
		while(d!=0)
		{
			sum+=a[d]*pow(2,i);
			i++;
			d--;
		}
		cout<<sum<<"\n";
		sum=0;
		i=0;
	}
	return 0;
}
