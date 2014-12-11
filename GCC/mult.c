#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mult(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		if(a==0||b==0)
		{
			return 0;
		}
		else
		{
			return a+mult(a,b-1);
		}
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",mult(a,b));
	return 0;
}
