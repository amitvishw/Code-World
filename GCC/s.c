#include<stdio.h>
int main()
{
	int n1,n2,j,i,r,c,sum=0,d,n,dn=0;
	scanf("%d",&c);
	for(j=0;j<c;j++)
	{
		/*scanf("%d %d",&n1,&n2);
		for(i=n1;i<=n2;i++)
		*/
			scanf("%d",&n);
			while(n != 0)
			{
				r=n%10;
				if(r%2==0)
				{
					sum=sum+r*2;
				}
				else
				{
					sum=sum+r;
				}
				n=n/10;
			}
		
		
		d=sum%10;
		printf("%d+%d\n",d,sum);
		dn=dn+d;
		printf("%d\n",dn);
		sum=0;
		dn=0;

	}
	return 0;
	
}
