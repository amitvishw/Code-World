#include <stdio.h>
#include <string.h>
void main()
{
	char a[100],b[100],i,j,k;
	scanf("%s",a);
	k=strlen(a);
	j=k;
	for(i=0;i<k;i++)
	{
		j=j-1;
		b[j]=a[i];
	}
	printf("%s",b);
	
}
