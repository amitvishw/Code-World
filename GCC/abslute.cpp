#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>=0)
		{
			cout<<n<<"\n";
		}
		else
		{
			cout<<-n<<"\n";	
		}
	}
	return 0;
}

