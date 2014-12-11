#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d %d\n",a,&a);
	int *p = &a;
	printf("%d %d\n",*p,p);
	*p = 0;
	printf("%d %d\n",a,p);
	return 0;
}
