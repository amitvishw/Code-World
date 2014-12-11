#include<iostream>
#include<math.h>
using namespace std;
class equ
{
	private:
		int a,b,c,d;
	public:
		void getdata();
		void clt();
};
void equ::getdata()
{
	cout<<"Enter value of coefficents of quadratic equation:\na=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
}
void equ::clt()
{
	d=pow(b,2)-4*a*c;
	if(d==0)
	{
		cout<<"\nRoots are equal and value of them is "<<-b/2*a;
	}
	else
	{
		if(d<0)
		{
			cout<<"\nEquation has no real roots.";
		}
		else
		{
			cout<<"\nTwo real roots and these are "<<(-b+sqrt(d))/2*a<<" and "<<(-b-sqrt(d))/2*a<<"\n";
		}
	}
}
int main()
{
	equ chodu;
	chodu.getdata();
	chodu.clt();
	return 0;
}

