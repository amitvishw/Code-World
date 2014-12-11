#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pln(long long int n)
{
	int r;
	long long int sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(n==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	long long int sum2,sum2,num,i,count,k;
	int r,t;
	cin>>t;
	while(t--)
	{
		cin>>num;
		count=0;
		while(num!=0)
		{
			r=num%10;
			sum1=sum1*10+r;
			num=num/10;
			sum2=sum1+num;
			
			if(sum2==)
		}
		
	}
	return 0;
}
