#include<stdio.h>
void main()
{
	int a[100],b[100],i,h,t,j=0,min;
	scanf("%d",&t);	
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(h=0;h<t;h++)		
	{		
		for(i=0;i<t;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				printf("%d ",min);	
			}
			b[j]=min;
			j++;
			
		}
	}
	printf("\n");
	for(j=0;j<t;j++)
	{
		printf("%d ",b[j]);	
	}

}
