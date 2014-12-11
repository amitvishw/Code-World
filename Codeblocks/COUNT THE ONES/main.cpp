#include <cstdio>
int main()
{
    unsigned int a;
    int r,c=0;
    scanf("%u",&a);
    while(a)
    {
        r=a%2;
        if(r)
        {
            c++;
        }
        a=a/2;
    }
    printf("%d",c);
    return 0;
}
