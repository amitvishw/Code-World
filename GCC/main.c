#include<stdio.h>
void main()
{
	int a[100006],b[100006],j,i,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=t;i++)
	{
		a[b[i]]++;
	}
	for(j=1;j<100006;j++)
	{
	while(a[j]--)
	{
	printf("%d\n",j);
	}
	}	
}
