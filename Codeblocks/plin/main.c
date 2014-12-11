#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,n,r,s;
    int t,c;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        c=0;
        scanf("%lld %lld",&a,&b);
         printf("%lld %lld\n",a,b);
        while(a<=b)
        {
            n=a;
            printf("%lld %lld\n",a,n);
            while(n!=0)
            {
                r=n%10;
                s=s*10+r;
                n=n/10;
            }
            if(s==a)
            {
                printf("%lld",s);
                c++;
            }
            a++;
        }
        printf("\n%d",c);
    }
    return 0;
}
