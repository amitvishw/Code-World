#include<stdio.h>
int main()
{
	int a[100009],i,max=0,t,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&l);
		for(i=0;i<l;i++)
		{
			scanf("%d",&a[i]);
			if(max<a[i])
				max=a[i];
		}
		printf("%d\n",max);
		max=0;
	}
	
	return 0;
}
