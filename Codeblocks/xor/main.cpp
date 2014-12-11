#include<cstdio>
int main()
{
    int m,t,a[1009],n,i,j,l,x,temp;
    scanf("%d",&t);
    while(t--)
    {
        m=0;
        scanf("%d %d",&n,&l);
        m=m^l;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1; i<1<<n; i++)
        {
            temp=i;
            j=0;
            x=0;
            while(temp)
            {
                if (temp&1)
                {
                    x=x^a[j];
                }
                temp >>= 1;
                j++;
            }
            x=x^l;
            if(x>m)
            {
                m=x;
            }
        }
         printf("%d\n",m);
    }
	return 0;
}
