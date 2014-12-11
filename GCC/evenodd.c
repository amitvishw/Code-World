#include<stdio.h>
int main()
{
	int a[1000005],t,i,even=0,odd=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	if(odd>even)
	{
		printf("%d\n",odd-even);
	}
	else
	{	
		printf("%d\n",even-odd);
	}
	return 0;
	
}
