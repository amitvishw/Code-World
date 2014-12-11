#include<stdio.h>
int main()
{
	int j,t,n,i,f;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{	
		f=0;
		scanf("%d",&n);
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				f=1;
			}		
		}
		if(f==0 && n != 0 && n!= 1)
		{
			printf("PRIME\n");
		}
		else
		{
			printf("NOT PRIME\n");
		}
	}
}
