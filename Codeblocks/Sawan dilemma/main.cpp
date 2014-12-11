#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int y,x,i,t,r,c,a,v[509],n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&y,&x);
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
        }
        a=y-x;
        c=0;
        sort(v,v+n);
        for(i=n-1;i>=0;i--)
        {
            r=a/v[i];
            c+=r;
            a=a-r*v[i];
        }
        printf("%d\n",c);
    }
    return 0;
}
