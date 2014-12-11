#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	while(1)
{
	time_t CT;
	time(&CT);
	printf("%s",ctime(&CT));
	system("clear");
}
	return 0;
	
}
