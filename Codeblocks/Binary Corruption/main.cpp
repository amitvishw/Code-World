#include<cstdio>
int OIndex(int a[],int n)
{
    int m= 0;
    int mi;
    int pz=-1;
    int ppz=-1;
    int i;
    for (i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(i-ppz>m)
            {
                m=i- ppz;
                mi=pz;
            }
            ppz=pz;
            pz=i;
        }
    }
    if(n-ppz>m)
       mi=pz;
    return mi;
}
int main()
{
    int i,t,n,a[10009];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("%d\n",OIndex(a,n));
    }
    return 0;
}
