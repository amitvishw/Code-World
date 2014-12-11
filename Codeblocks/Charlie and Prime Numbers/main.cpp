#include<stdio.h>
#include<math.h>
int primes[100000];
void prime()
{
	int i,flag=0,j,k=1;
	primes[0]=2;
	for(i=3;i<500000;i++)
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
    prime();
    int n,m,i,t;
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        sum=0;
        for(i=0;i<100000&&primes[i]<m;i++)
        {
            if(primes[i]>=n)
            sum+=primes[i];
        }
        printf("%lld\n",sum);
    }

    return 0;
}
