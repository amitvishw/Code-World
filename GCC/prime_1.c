#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],j;
	int m,k,t,i,l;
	scanf("%d",&t);
	for(m=0;m<t;m++)
	{	
		l=1;
		scanf("%s",a);
		k=strlen(a);
		strcpy(b,a);
		for(i=0;i<=k/2;i++)
		{
			j=a[i];
			a[i]=a[k-1-i];
			a[k-1-i]=j;
		}
		printf("%s+%s\n",a,b);
		l=strcmp(a,b);
		if(l==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");	
		}
	}
}
