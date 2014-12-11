#include<stdio.h>
int main()
{
	int a[10000],t,value,i,hole,n;
	
	scanf("%d",&t);	
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		value=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
	}
	for(i=0;i<t;i++)
	{
		printf("%d  ",a[i]);
	}
		
}
