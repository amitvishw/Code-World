#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100005];
    int i,l;
    int c[200]={0};
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c[a[i]]++;
    }
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(c[a[i]])
        printf("%c%d",a[i],c[a[i]]);
        c[a[i]]=0;
    }
    return 0;
}
