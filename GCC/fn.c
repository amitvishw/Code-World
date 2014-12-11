#include<stdio.h>
int main()
{
int frt=0,snd=1,nxt,i,n,t,j,k=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		while(1)
		{
			nxt=frt+snd;
			frt=snd;
			snd=nxt;
		
			if(n==nxt)
			{
				printf("YES\n");
				k=1;
				break;
				
			}
			else
			{	if(k==0)
				{
					printf("NO\n");
					break;
				}
			}	
		}
	}
return 0;
}
