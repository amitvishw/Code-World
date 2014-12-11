#include<stdio.h>
int main()
{
	int a[200],index,i,j,n,tmp,counter=0,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a[0]=1;
		index=0;
		for(j=n;j>=2;j--)
		{
			tmp=0;
			for(i=0;i<=index;i++)
			{
			        tmp=(a[i]*j)+tmp;
			        a[i]=tmp%10;
			        tmp=tmp/10;
			}
    			while(tmp>0)
			{
			        a[++index]=tmp%10;
			        tmp=tmp/10;
    			}
		}
		for(i=index;i>=0;i--)
		{
    			printf("%d",a[i]);
		}
		printf("\n");
	}
return 0;
}
