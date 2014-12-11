#include<iostream>
using namespace std;
class teacher
{
	public:
	int R;
	char N[100];
	void getdata();
	void batadata();
	void end();
};
	void teacher::getdata()
     {
	cout<<"enter student ka naam \t\a";
	cin>>N;
	cout<<"\nenter uska roll number \t";
	cin>>R;
     }
	void teacher::batadata()
     {
	cout<<"NAME = "<<N<<"\n";
	cout<<"iska roll no = "<<R<<"\n";
     }
	void teacher::end()
     {
	cout<<"\a\a\a\a\a\a\a\a\a\a\aTHANKS FOR USING THIS SOFTWARE\a\a\a\a\n";

     }
int main()
{
int i,z;
cout<<"areee oo user..			kitne aadmi(student) the..?\n";
cin>>z;
for(i=0;i<=z;i++)
{
teacher student[i];
student[i].getdata();
student[i].batadata();
}
return 0;
}
	
	 
	
