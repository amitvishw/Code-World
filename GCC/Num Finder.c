#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a[10],d,i,loc,found=0;
	printf("Enter 10 Num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Which num u want to find:");
	scanf("%d",&d);
	for(i=0;i<10;i++)
	{
		if(d==a[i])
		{
			found=1;
			loc=i+1;
			break;
		}
	}
	if(found==1)
	{
	
	printf("Num is found on location %d",loc);
	}
	else
	{
		printf("Num is not found");
	}
}

