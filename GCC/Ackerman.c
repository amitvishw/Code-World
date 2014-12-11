int akrmn(int a,int b);
int akrmn(int a,int b)
{
	if(a==0)
	{
		return b+1;
	}
	else
	{	
		if(a>0&&b==0)
		{
			return akrmn(a-1,1);
		}
		else
		{
			if(a>0&&b>0)
			{
				return akrmn(a-1,akrmn(a,b-1));
			}
		}
	}
}
