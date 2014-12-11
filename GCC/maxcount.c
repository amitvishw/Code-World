#include<stdio.h>
int main()
{
	int a[10009],b[100006],max,c,j,i,t,l,m;
	scanf("%d",&c);
	for(m=0;m<c;m++)
	{	
		l=0;
		scanf("%d",&t);
		for(i=1;i<=t;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=1;i<=t;i++)
		{
			a[b[i]]++;
		}
		max=a[0];
		for(j=1;j<10009;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				l=j;	
			}		
		}
		printf("%d %d\n",l,max);
		for(i=0;i<10009;i++)
		a[i]=0;
	}
	return 0;	
}
