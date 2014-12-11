#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[1009];
    int i,t,l;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int a[200]={0};
        int b[200]={0};
        cin>>ch;
        l=strlen(ch);
        for(i=0;i<l/2;i++)
        {
            a[ch[i]]++;
        }
        for(i=(l+1)/2;i<l;i++)
        {
            b[ch[i]]++;
        }
        for(i=30;i<190;i++)
        {
            if(b[i]!=a[i])
            {
                    cout<<"NO\n";
                    flag=1;
                    break;
            }
        }
        if(flag==0)
        {
            cout<<"YES\n";
        }

    }
    return 0;
}
