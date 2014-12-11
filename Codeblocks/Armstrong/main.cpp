#include<cstdio>
int main()
{
    int f,l,i,r,sum,n;
    scanf("%d %d",&f,&l);
    for(i=f;i<=l;i++)
    {
        sum=0;
        n=i;
        while(n)
        {
            r=n%10;
            sum+=r*r*r;
            n=n/10;
        }
        if(i==sum)
            printf("%d\n",sum);
    }
    return 0;
}
