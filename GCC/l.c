#include<stdio.h>
int main()
{
	int n1,n2,j,k,i,r,c,sum=0,d,n,dn=0;
	scanf("%d",&c);
	for(k=0;k<c;k++)
	{	
		scanf("%d %d",&n1,&n2);
		for(n=n1;n<=n2;n++)
		{	
			j=n;
			while(j>0)
			{
				r=j%10;
				j=j/10;
				if(r%2==0)
				{
					sum=sum+r*2;
				}
				else
				{
					sum=sum+r;
				}
			
			}
			d=sum%10;
			dn=dn+d;
			sum=0;
		}
			printf("%d\n",dn);
			dn=0;
	}
	return 0;
}
