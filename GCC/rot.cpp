#include <iostream>
using namespace std;
int gcd(int ,int );
int gcd(int a,int b)
{
		if(b==0)
		{
			return a;
		}
		else
		{
			return gcd(b,a%b);
		}
}

int main()
{
	int arr[100],n,i,d;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>d;
		int set_size = gcd(n ,d);
		for(int i=0; i<set_size; i++)
		{
			int temp = arr[i];
			int j=i;
			int k=0;
			while(1)
			{
				k = j+d;
				if(k >= n)
				 k = k-n;
				if(k==i)
				 break;
				arr[j] = arr[k];
                j = k; 
			}
			arr[j] = temp;
		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i];
		}
	return 0;
}
