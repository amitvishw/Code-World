#include<stdio.h>
int main()
{
	int n,t,temp,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		temp=n;
		while(temp)
		{
			sum+=temp%10;
			temp=temp/10;
		}
		sum=n%sum;
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
