int linearsearch(int a[],int len,int num)
{
	int flag=0,i;		
	for(i=0;i<len;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
