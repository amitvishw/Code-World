#include<cstdio>
#include<cmath>
int main()
{
    int t,a,c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&a);
        while(a>=2)
        {
            a=a/2;
            c++;
        }
        a=pow(2,c);
        printf("%d\n",a);
    }
    return 0;
}
