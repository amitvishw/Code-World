#include<iostream>
using namespace std;
class amar
{
private:
char name[10];
int roll;
public:
void get();
void show();
};
void amar::get()
{
cout<<"enter the name:";
cin>>name;
cout<<"enter the roll:";
cin>>roll;
}
void amar::show()
{
cout<<"your name is "<<name;
cout<<"your roll is "<<roll;
}
int main()
{
amar o1;
o1.get();
o1.show();
return 0;
}
