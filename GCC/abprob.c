#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d %d",&a,&b);
	n=a-b;
	if(n%10==9)
	{
		printf("%d\n",n-1);
	}
	else
	{
		printf("%d\n",n+1);	
	}
	return 0;
}
