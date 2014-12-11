#include<iostream>
using namespace std;
class calculator
{
	public:
	int a,b,c;
	void value_dee();
	void calculate_kar();
	void answer_dekh_bhai();
};
void calculator::value_dee()
{
	cin>>a>>b;
}
void calculator::calculate_kar()
{
	c=a+b;
}
void calculator::answer_dekh_bhai()
{
	cout<<c<<"\n";
}
int main()
{
	calculator londe;
	londe.value_dee();
	londe.calculate_kar();
	londe.answer_dekh_bhai();
	return 0;
}

