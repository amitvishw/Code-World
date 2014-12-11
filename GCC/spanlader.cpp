#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	float bs,hi,hymn,hymx;
	cin>>t;
	while(t--)
	{
		cin>>bs>>hi;
		hymn=sqrt(hi*hi-bs*bs);
		hymx=sqrt(hi*hi+bs*bs);
		cout<<hymn<<" "<<hymx<<"\n";
	}
	return 0;
}
