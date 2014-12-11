#include<iostream>
#include<unistd.h>//to use sleep() funtion
#include<stdlib.h>//to use system() funtion
using namespace std;
int main()
{
	int i,j,h=0,m=0,s=0;
	while(1)
	{
		system("clear");		
		cout<<h<<":"<<m<<":"<<s<<"\n";
		s++;
		if(s==60)
		{
			m=m+1;
			s=s%60;
		}
		if(m==60)
		{
			h=h+1;
			m=m%60;
		}
		if(h==24)
		{
			h=h%24;
		}
		sleep(1);
		
	}
	return 0;
}
