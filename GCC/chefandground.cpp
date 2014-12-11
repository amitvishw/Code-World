#include<stdio.h>
int main()
{
	int t,n,i,max,m,sum,a[100000];
	scanf("%d",&t);
	while(t--)
	{
		max=0;
		sum=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(max<a[i])
				max=a[i];
		}
		for(i=0;i<n;i++)
		{
			sum=sum+(max-a[i]);
		}
		if(sum==m||sum%m==0||m%sum==0)
			printf("YES\n",sum);
		else
			printf("NO\n",sum);
		
	}
	return 0;
}
