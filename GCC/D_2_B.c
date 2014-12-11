#include<stdio.h>
int main()
{
	int n,b,r[100],i=1,l;
	scanf("%d %d",&n,&b);
	while(n>0)
	{
		r[i]=n%b;
		n=n/b;
		i++;
	}
	l=n;
	for(i=l;i>0;i--)
	{
		printf("%d",r[i]);
	}
	printf("\n");
	
}


