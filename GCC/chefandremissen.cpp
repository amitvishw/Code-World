#include <iostream>
using namespace std;
int main()
{
	int a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<a<<" "<<a+b<<"\n";
		}
		else
		{
			cout<<b<<" "<<a+b<<"\n";
		}
	}
	return 0;
}
