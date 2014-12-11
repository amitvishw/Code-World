#include <iostream>
using namespace std;
int main()
{
    int t,c,i;
    char a[100009];
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a;
        for(i=0;a[i]!='\0';i++)
        {
                if(a[i]==a[i+1])
                {
                    c++;
                }
        }
        cout<<c<<"\n";
    }
    return 0;
}
