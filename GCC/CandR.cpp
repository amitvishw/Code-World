#include <iostream>
using namespace std;
int main()
{
	int i,n,t,p;
	cin>>t;
	for(i=0;i<t;i++)
	{
		n=2048;
		int m=0;
		cin>>p;
		
			if(p==1||p==2 ||p==4||p==8||p==16||p==32||p==64||p==128||p==256||p==512||p==1024||p==2048)
			{
				cout<<"1\n";
			}	
			else
			{
				if(p%2==0&&p/2<=2048)
				{
					cout<<"2\n";
				}
				else
				{
					while(p>0)
					{
						m=m+p/n;
						p=p-m*n;
						n=n/2;
					}
					cout<<m<<"\n";
				}
		}
}
	return 0;
}
