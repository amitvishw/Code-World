#include<stdio.h>
#include<stdlib.h>
int linearsearch(int a[],int len,int num)
{
	int flag=0,i;		
	for(i=0;i<len;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
int main()
{
	system("clear");
	int a[100],i,num,len;
	printf("Enter the number of element:");
	scanf("%d",&len);
	printf("Enter %d Number:\n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to find in list:");
	scanf("%d",&num);
	if(linearsearch(a,len,num))
	{
		printf("SUCCESS\n");
	}
	else
	{
		printf("NO MATCH\n");
	}	
	return 0;

}
