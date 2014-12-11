#include<cstdio>
#include<algorithm>
int main()
{
    int a[10000],i=0,j,k,n=0,temp,flag;
    for(n=0;scanf("%d",&a[n])!=EOF;n++);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                std::swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag)
        {
            for(k=0;k<n;k++)
            {
                printf("%d ",a[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
