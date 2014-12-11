#include<stdio.h>
float subavg(int a[],int l)
{
	int max=0;
	int maxe=0;
	int count=0;
	for(int i=0;i<l;i++)
	{
		maxe=maxe+a[i];
		if(maxe<0)
		{
			maxe=0;
		}
		if(max<maxe)
		{
			max=maxe;
			
		}
	}
	return max;
}
int main()
{
	int a[100009],i,j,k;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\n%f",subavg(a,10));
	return 0;
}
