#include<cstdio>
int main()
{
    int i,j,flag,t;
    char s[1009];
    scanf("%d",&t);
    while(t--)
    {
        int ct[200]={0};
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            ct[s[i]]++;
        }
        j=0;
        flag=1;
        for(i=97;i<123;i++)
        {
            j++;
            if(ct[i])
            {
                if(ct[i]!=j)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
