#include<cstdio>
int main()
{
    int n,i,t;
    long int sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=1;
        scanf("%d",&n);
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i*i==n)
                {
                    sum+=i;
                }
                else
                {
                    sum+=i;
                    sum+=(n/i);
                }
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}
