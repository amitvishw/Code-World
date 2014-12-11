#include<stdio.h>
#include<stdlib.h>
//using namespace std;
//void selection(int, int );
void selection(int *array,int n)
{
	int i,min,h,j=0;
	min=0;
	for(h=0;h<n;h++)		
	{		
		for(i=0;i<n;i++)
		{
			if(array[i]>min)
			{
				min=array[i];
				printf("%d ",min);	
			}
			min;
			j++;
			
		}
	}
}
int main()
{
	int a[10]={4,3,1,7,8,9,2,5,6,11};
	selection(a,10);
	//for(int i=0;i<10;i++)
		//printf("%d",a[i]);;
}
