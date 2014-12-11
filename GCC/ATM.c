#include<stdio.h>
int main()
{
float x;
int y;
scanf("%d %f",&y,&x);
	if(y % 5 == 0 && x>(y+.50))
	{  
	   printf("%.02f\n",x-y-.50);
	}
	else
	{
	   printf("%.02f\n",x);	
	}
return 0;
}

