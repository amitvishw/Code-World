#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		if(n%2==0)
		{
			cout<<"BOB\n";
		}
		else
		{
			cout<<"ALICE\n";
		}
	}
	return 0;
}
