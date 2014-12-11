#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100005];
    int i,l,t;
    scanf("%d",&t);
    while(t--)
    {
        int c[200]={0};
        scanf("%s",a);
        l=strlen(a);
        for(i=0;a[i]!='\0';i++)
        {
            c[a[i]]++;
        }
        for(i=96;i<130;i++)
        {
            if(c[i]>1)
            {
                l=l-c[i]+1;
            }
        }
        printf("%d\n",l);
    }
    return 0;
}
