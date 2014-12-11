#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c,t,l;
    char s[1009];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        c=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]!='*')
            {
                for(j=i+1;s[j]!='\0';j++)
                {
                    if(s[i]==s[j])
                    {
                        c++;
                        s[j]='*';
                    }
                }
            }
        }
        printf("%d\n",l-c);
    }
    return 0;
}
