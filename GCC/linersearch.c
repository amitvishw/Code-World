#include <stdio.h>
int linearsearch(int array[],int lenght,int number)
{
	int i=0;
	for(i=0;i<lenght;i++)
	{
		if(array[i]==number)
		{
			return 0;
			break;
		}
	}
}
int main() 
{
	int array[1000],number,i,leanght;
	scanf("%d",&leanght);
	for(i=0;i<leanght;i++)
	{
		scanf("%d",&array[i]);	
	}
	scanf("%d",&number);
	if(linearsearch(array,leanght,number))
	{
		printf("Not Found");
	}
	else
	{
		printf("Found");
	}
	return 0;
}
