#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		int fib=(pow(1.618,n)+pow(0.618,n))/sqrt(5);
			printf("\n%d\n--------\n",fib);
	}
}
