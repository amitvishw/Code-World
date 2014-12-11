#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a;
    while(1)
    {
        scanf("%lld",&a);
        if(a%2==0)
            printf("%lld\n",a);
        if(a==-1)
            break;
    }
    return 0;
}
