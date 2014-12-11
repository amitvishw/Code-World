#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int n;
	int i,t;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		for(i=0;i<10000;i++)
		{
			if(pow(2,i)>n)
			{
				break;
			}
		}
		cout<<pow(2,i-1)<<"\n";
	}
	return 0;
}
