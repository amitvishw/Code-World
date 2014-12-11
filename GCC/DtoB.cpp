#include<iostream>
using namespace std;
int main()
{
	long long int n;
	int a[100009],i,t,j,k=0,r;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n!=0)
		{
			r=n%2;
			a[k]=r;
			n=n/2;
			k++;
		}
		for(j=k-1;j>=0;j--) 
     		{
            		cout<<a[j];
      		}
		k=0;
	}
	return 0;
}
