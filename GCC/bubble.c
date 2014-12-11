#include<stdio.h>
void main()
{
	int a[1000005],t,k,i,temp=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<t;k++)		
	{	
		for(i=0;i<t-1;i++)
		{
			if(a[i]>a[i+1])
			{ 
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",a[i]);
	}
}

