#include <iostream>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	time_t ct;
	time(&ct);
	printf("%s",ctime(&ct));
	return 0;
}
