#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float divi(int a,int b)
{
	if(a<1)
	{
		return 1;
	}
	else
	{
		return (1/b)+divi(a-1,b);
	}
}
int main()
{
	int a,b;
	while(1)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		printf("%f",divi(a,b));
	}
	return 0;
}
