#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a1,b1,a,b,i,j,c,maxc;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        a1=a;
        b1=b;
        if(b1<a1)
        {
            swap(a1,b1);
        }
        maxc=0;
        for(i=a1;i<b1+1;i++)
        {
            c=1;
            j=i;
            while(j!=1)
            {
               if(j%2==0)
               {
                   j=j/2;
               }
               else
               {
                   j=3*j+1;
               }
               c++;
            }
            if(c>maxc)
            {
                maxc=c;
            }
        }
        printf("%d %d %d\n",a,b,maxc);
    }
    return 0;
}
