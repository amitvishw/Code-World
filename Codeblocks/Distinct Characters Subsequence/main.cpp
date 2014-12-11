#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10009];
    int i,l,c,t,j;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]==a[j]&&a[i]!='+')
                {
                    c++;
                    a[j]='+';
                }
            }
        }
            cout<<l-c<<"\n";
    }
    return 0;
}
