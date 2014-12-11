#include<stdio.h>
int main()
{
    int t,i;
    char a[109];
    scanf("%d",&t);
    while(t--)
    {
        int l=0;
        int c[200]={0};
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            c[a[i]]++;
        }
        l=l+c[65];
        l=l+2*c[66];
        l=l+c[68];
        l=l+c[79];
        l=l+c[80];
        l=l+c[81];
        l=l+c[82];
        printf("%d\n",l);
    }

    return 0;
}
