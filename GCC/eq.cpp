#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	float a,b,c,d;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	cout<<"Enter value of c:";
	cin>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		cout<<"\nRoots are equal and value of them is "<<-b<<"/"<<2*a;
	}
	else
	{
		if(d<0)
		{
			cout<<"\nEquation has no real roots.";
		}
		else
		{
			cout<<"\nTwo real roots and these are "<<-b+sqrt(d)<<"/"<<2*a<<" and "<<-b-sqrt(d)<<"/"<<2*a;
		}
	}
	return 0 ;
}
