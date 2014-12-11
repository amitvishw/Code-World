#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int temp,arr[1000];
	int d,n,i=0,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cin>>d;
	/*for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	for(i=0;i<n-d;i++)
	{
		arr[i]=arr[i+d];
	}
	for(j=n-d,k=0;j<n;j++,k++)
	{
		arr[j]=temp[k];
	}

	printf("\nAfter Rotation: ");
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
*/  while (i < n-d)
  {
     temp= arr[i];
     arr[i] = arr[(i + d) % n];
     arr[(i + d) % n] = temp;
     i++;
  }
printf("\nAfter Rotation: ");
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);

}
