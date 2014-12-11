#include<stdio.h>
#include<string.h>
void main()
{
	char a[1000006],temp;
	int i,j,k,l,m;
	scanf("%s",a);
	l=strlen(a);
	j=l/2;
	for(i=0;i<=j/2;i++)
	{
		temp=a[i];
		a[i]=a[j-i-1];
		a[j-i-1]=temp;
		//printf("%c ",a[j-i-1]);
	}
	printf("%s\n",a);
	for(i=l/2;i<j/2;i++)
	{
		temp=a[i];
		a[i]=a[j-i-1];
		a[j-i-1]=temp;
	}
	printf("%s\n",a);
}
