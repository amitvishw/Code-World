#include<stdio.h>
int fact(int n);
int fact(int n)
{
	int n;
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*(n-1);
	}
}
int main()
{	
	int n,i,j,facto;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%d",&n);
		facto=fact(n);
		printf("%d",facto);
	}
return 0;
}
