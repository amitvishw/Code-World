#include<stdio.h>
int main()
{
	int a,r,sum=0,t,i,j,l;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d",&a);
		if(a%2==0)	
		{
			printf("YES\n");	
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
