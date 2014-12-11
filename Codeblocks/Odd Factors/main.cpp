#include<stdio.h>
#include<math.h>
int primes[100000];
void prime()
{
	int i,flag=0,j,k=1;
	primes[0]=2;
	for(i=3;i<100009;i++)
	{
		flag=0;
		for(j=0;primes[j]<=sqrt(i);j++)
		{
			if(i%primes[j]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			primes[k]=i;
			k++;
		}
	}
}
int main()
{
	int n,i,j,k,t,c;
	prime();
	scanf("%d",&t);
	while(t--)
	{
		c=1;
		int fact[100000]={0};
        scanf("%d",&n);
        for(k=0;primes[k]<=n;k++)
        {
            while(n%primes[k]==0)
            {
                    n=n/primes[k];
                    fact[primes[k]]++;
            }
        }
		for(i=0;i<100000;i++)
		if(fact[i])
		c=c*(fact[i]+1);
		if(c%2!=0&&c>4)
        {
                printf("1\n");
        }
        else
        {
                printf("-1\n");
        }
	}
    return 0;
}
