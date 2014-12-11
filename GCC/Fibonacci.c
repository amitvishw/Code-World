#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fibonacci(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		printf("\n%d\n--------\n",fibonacci(n));
	}
	
	return 0;
}
