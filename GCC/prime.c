#include<stdio.h>
void main()
{
	int n,i,j,t,f;
	for(j=0;j<t;j++)
	{  
		scanf("%d",&n);
		f=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				f=1;
			}
		}
		if(f==0)
		{
			printf("PRIME\n");
		}
		else
		{
			printf("NOT PRIME\n");
		}
	}

  
}
