#include<stdio.h>
int main()
{
	int i;
	while(i != 42)
	{
		scanf("%d",&i);
		if(i==42)
		{
		  break;
		}	
		else
		{
		 printf("%d\n",i);
		}
	}
return 0;
}
