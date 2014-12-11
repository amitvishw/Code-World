#include<iostream>
using  namespace std;
long long int multiplication(int a,int b);
long long int multiplication(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		if(a==0||b==0)
		{
			return 0;
		}
		else
		{
			return a+multiplication(a,b-1);
		}
	}
}
long double division(long double a,long double b);
long double division(long double a,long double b)
{	
	if(a==0)
	{
		return 0;
	}
	else
	{
		return 1/b+division(a-1,b);
	}
}
long long int factorial(int n);
long long int factorial(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
long long int fibonacci(int n);
long long int fibonacci(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int ackerman(int a,int b);
int ackerman(int a,int b)
{
	if(a==0)
	{
		return b+1;
	}
	else
	{	
		if(a>0&&b==0)
		{
			return ackerman(a-1,1);
		}
		else
		{
			if(a>0&&b>0)
			{
				return ackerman(a-1,ackerman(a,b-1));
			}
		}
	}
}
void menu();
void menu()
{
	cout<<"1.Factorial\n2.Multiplication\n3.Division\n4.Fibonacci\n5.Akerman funtion\n6.Towers of hanoi\n7.Exit\nEnter your choice:";
}
int main()
{
	long double a,b;
	int x,y;
	int c;
	do
	{
		menu();
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter an intiger:";
				cin>>a;
				cout<<a<<"!="<<factorial(a)<<"\n\n";
				break;
			case 2:
				cout<<"Enter two numbers:";
				cin>>a>>b;
				cout<<a<<"x"<<b<<"="<<multiplication(a,b)<<"\n\n";
				break;
			case 3:
				cout<<"Enter two numbers:";
				cin>>a>>b;
				cout<<a<<"/"<<b<<"="<<division(a,b)<<"\n\n";
				break;
			case 4:
				cout<<"Enter an intiger:";
				cin>>x;
				cout<<"fibonacci number is:"<<fibonacci(x)<<"\n\n";
				break;
			case 5:
				cout<<"Enter two numbers:";
				cin>>x>>y;
				cout<<"Ackerman number is:"<<ackerman(x,y)<<"\n\n";
				break;
				
		}
	}while(c!=7);
}
