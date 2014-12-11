#include<stdio.h>
#include<string.h>
 int main()
{
   	char string[1000009],c;
	char chr[1000009]={'$'};
  	int i=0,j=-1,count[1000009]={0};
 	scanf("%s",string);
 	while ( string[i] != '\0' )
   	{
		if (chr[j] != string[i])
        	{
			j++;
        		chr[j]=string[i];
			count[j]++;
    		}
		else
		{
			count[j]++;
		}
		i++;
	}
	int max=0;
	j=0;
	for(i=0;i<1000009;i++)
	{
		if(max<count[i])
		{
			max=count[i];
			j=i;
			c=chr[j];
		}
		if(max==count[i])
		{
			if(chr[i]<chr[j])
			c=chr[i];
		}
	}
	printf("%c\n%d\n",c,max);
	return 0;
}
