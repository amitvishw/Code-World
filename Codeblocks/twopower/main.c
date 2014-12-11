#include <stdio.h>
#include <stdlib.h>
int poweroftwo(int x)
{
    return (x&(x-1));
}
/*
if a number is power of 2 then most significant bit is 1 remain are 0
      x=4 100          y=5 101
    x-1=3 011        y-1=4 100
x&(x-1)=0 000    y&(y-1)=4 100
*/
int main()
{
    int a;
    do
    {
        scanf("%d",&a);
        if(poweroftwo(a)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }while(a!=-1);
    return 0;
}
