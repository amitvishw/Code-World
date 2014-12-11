#include<stdio.h>
int main()
{
    char a[100009],ch;
    int i,c=0;
    fgets(a,100009,stdin);
    scanf("%c",&ch);
    for(i=0;a[i]!='\n';i++)
    {
        if(ch==a[i])
            c++;
    }
    printf("%d",c);
    return 0;
}
