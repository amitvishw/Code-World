#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//gives fibonacci numbers till 33th
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		long long int fib=(pow(1.618034,n)-pow((-0.618034),n))/sqrt(5);
			printf("\n%lld\n--------\n",fib);
			
	}
}
