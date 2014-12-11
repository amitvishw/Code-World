#include<string.h>
#include<stdio.h>
int main()
{
	char a[100];
	int j,i,l,t,c;
	scanf("%d",&c);
	for(j=0;j<c;j++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(i=l/2-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
		for(i=l-1;i>=l/2;i--)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
	
}
