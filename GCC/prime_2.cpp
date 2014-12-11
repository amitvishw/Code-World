#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0;;
	for(int i=2;i<600;i++)
	{
		if(i!=1&&i!=2&&i%2==0 ||i!=17&&i%17==0|| i!=3&&i%3==0 || i!=5&&i%5==0 || i!=7&&i%7==0 || i!=11&&i%11==0 || i!=13&&i%13==0 )
		{
			//cout<<i<<"NO\n";
		}
		else
		{
			c++;
			cout<<i<<"YES\t"<<c<<"\n";
		}	
	}
	cout<<c;
	return 0;
}
