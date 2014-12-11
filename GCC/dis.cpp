#include<iostream>
using namespace std;
class dis
{
	private:
	int kt,mt;
	public:
	void get();
	void opt (dis,dis);
	void claculate();
	void show();
};
void dis::get()
{
	cin>>kt>>mt;
}
void dis::opt(dis d1,dis d2)
{
	kt=d1.kt+d2.kt;
	mt=d1.mt+d2.mt;
	if(mt>1000)
	{
		int temp=mt/1000;
		kt=kt+temp;
		mt=mt-(temp*1000);
	}
}
void dis::show()
{
cout<<kt<<"\t"<<mt;
}
int main()
{
	dis d1;
	dis d2;
	dis d3;
	d1.get();
	d2.get();
	d3.opt(d1,d2);
	d3.show();
	return 0;

}
