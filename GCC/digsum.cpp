#include<iostream>
using namespace std;
int main()
{
	int num,i,r,sum=0,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>num;
		while(num!=0)
		{
			r=num%10;
			sum+=r;
			num=num/10;
		}
		cout<<sum<<"\n";
		sum=0;	
	}
	return 0;
}
