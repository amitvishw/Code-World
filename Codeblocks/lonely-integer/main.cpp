#include <iostream>

using namespace std;

int main()
{
    int a[1000]={0},i,n,mx=0,num;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        a[num]++;
        if(mx<num)
        {
            mx=num;
        }
    }
    for(i=0;i<mx+1;i++)
    {
            if(a[i]==1)
            {
               cout<<i;
                break;
            }

    }
    return 0;
}
