#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int t,k,m;
	scanf("%d",&t);
	for(m=0;m<t;m++)
	{
		scanf("%s %s",a,b);
		k=strcmp(a,b);
		if(k==0)
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
