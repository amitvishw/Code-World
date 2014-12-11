#include <stdio.h>
#include <stdlib.h>
long long pow(long long base,int exp,int m)
{
    long long result=1;
    while(exp>0)
    {
        if(exp&1) result=(result*base)%m;
        base=(base*base)%m;
        exp=exp>>1;
    }
    return result;
}
int main()
{
    int i;
    long long int ans;
    for(i=1;i<6;i++)
    {
        anspow(i,i,1000);
        printf("%lld+",l);
    }

    return 0;
}
