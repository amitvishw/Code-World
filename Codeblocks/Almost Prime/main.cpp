#include<cstdio>
#include<cmath>
int main()
{
    long long int s,a,i;
    int t,flag,c;
    scanf("%d",&t);
    while(t--)
    {
        flag=1;
        scanf("%d",&a);
        c=0;
        s=sqrt(a);
        for(i=1;i<=s;i++)
        {
            if(a%i==0)
            {
                if(i==s)
                {
                    c+=1;
                }
                else
                {
                    c+=2;
                }
                if(c>3)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag&&c==3)
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

