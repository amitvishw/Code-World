#include<cstdio>
#include<cmath>
int main()
{
    int t,n,i;
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=1;
        scanf("%d",&n);
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i==sqrt(n))
                {
                    sum=((sum%10000)*(i%10000))%10000;
                    continue;
                }
                sum=((sum%10000)*(i%10000))%10000;
                sum=((sum%10000)*((n/i)%10000))%10000;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
