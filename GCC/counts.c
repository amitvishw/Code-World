#include<stdio.h>
int main()
{
	int a[10009],b[10008],i,j,k,l,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=t;i++)
	{
		b[a[i]]++;
	}
	for(i=1;i<=10008;i++)
	{
		while(b[i]--)
		{
			printf("%d ",i);
		}
	}
}
