#include <cstdio>
int main()
{
    int a[100009],l,r,n,i,q,t;
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        while(q--)
        {
            sum=0;
            scanf("%d %d",&l,&r);
            for(i=l-1;i<r;i++)
            {
                sum=sum+a[i];
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
