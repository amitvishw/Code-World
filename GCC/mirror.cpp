#include <iostream>
using namespace std;
int main() 
{
	char m[200][200],ch;
	int i,j,k,l,t,r,c;
	cin>>t;
	for(l=0;l<t;l++)
	{	
		cin>>r>>c;
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				cin>>m[i][j];
			}
		}
		cin>>ch;
		if(ch=='H')
		{
			for(i=r;i>0;i--)
			{
				for(j=1;j<=c;j++)
				{
					cout<<m[i][j];
				}
				cout<<"\n";
			}
		}
		else
		{
			for(i=1;i<=r;i++)
			{
				for(j=c;j>0;j--)
				{
					cout<<m[i][j];
				}
				cout<<"\n";
			}
			
		}
	}
	return 1;
}
