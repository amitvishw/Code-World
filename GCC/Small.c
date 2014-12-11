#include<stdio.h>
int fact(int n);
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{	
	int n,i,j,f;
	for(j=0;j<5;j++)
	{     
		scanf("%d",&n);
		f=fact(n);
		printf("%d\n",f);
	}
return 0;
}
