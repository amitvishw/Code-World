#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,l,t,len;
	char a[10000],one[10000],two[10000];
	cin>>t;
	while(t--)
	{
		cin>>a;
		len=strlen(a);
		
		std::string one=a.substr(0,len/2);
		cout<<one;
		two=a[len/2:len-1];
		
	}
	return 0;
}
