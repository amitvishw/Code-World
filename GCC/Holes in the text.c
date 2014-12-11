#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int t,i,f=0,l,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(a[j]=='A'||a[j]=='D'||a[j]=='O'||a[j]=='P'||a[j]=='Q'||a[j]=='R')
			{
				f=f+1;
			}
			if(a[j]=='B')
			{
				f=f+2;
			}
		}
		printf("%d\n",f);
		f=0;
	}
return 0;
}
