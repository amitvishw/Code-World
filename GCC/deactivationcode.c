#include<stdio.h>
int main()
{
	long long int n,temp;
		  int sum=0,r1,r2;
	scanf("%lld",&n);
	temp=n/100000;
	while(temp)
	{
		r1=temp%10;
		r2=n%10;
		sum+=r1*r2;
		temp=temp/10;
		n=n/10;
	} 
	printf("%d\n",sum);
	return 0;
}
