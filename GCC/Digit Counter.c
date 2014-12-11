#include <stdio.h>
#include <stdlib.h>


void main() 
{
	int n,r,d=0,i;
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
	
	n=n/10;
	d=d+1;
    }
	printf("%d",d);
	

}
