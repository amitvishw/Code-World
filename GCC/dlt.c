#include<stdio.h>
void main()
{
	int a[100009],max,len,loc,flag=0,num,itm,i,k;
	printf("Enter the number of element:");
	scanf("%d",&max);
	k=max;
	printf("Enter %d elements:\n",max);	
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number after which the number to be deleted:");
	scanf("%d",&num);
	for(i=0;i<max;i++)
	{
		if(a[i]==num)
		{
			flag=1;			
			loc=i+1;			
			break;
		}
	}
	if(flag==0)
	{
		printf("Enter only one of the entered numbers\n");
	}
	else
	{
		while(loc<=max)
		{
			a[loc]=a[loc+1];
			loc++;
		}
		a[loc]=itm;
		for(i=0;i<k-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}
