#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,l,num,k=0;
	printf("Enter the number of elements:");
	scanf("%d",&l);
	printf("Enter %d numbers:\n",l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	num=a[0];
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(num<a[j])
			{
				num=a[j];			
			}
		}
		printf("%d+",num);
	}
	for(k=0;k<l;k++)
	{
		printf("\n\n%d\t",b[k]);
	}
	return 0;
}
