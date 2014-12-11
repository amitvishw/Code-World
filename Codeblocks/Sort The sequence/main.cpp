#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000],n,i,t;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            sort(a,a+n);
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
    }
    return 0;
}
