#include<stdio.h>
int main()
{
   int n = 10; 
 /*  char a[100]; 
//   scanf("%s",a);
a[0] = 'b';
   scanf("%c",&a[0]);
   printf("%s\n",a);
   scanf("%d",&n); // & is read as address of
		   // therefore &n would be read as address of n
   printf("%u %d\n",&n,n);
*/ 
  // int n = 100;
   int *p = &n;
   printf("%d\n",p);
   printf("%d\n",*p); // * is read as value at 
		// so *p would be read as value at p

  *p = 50;
   printf("%d\n",n);
   
		 

}
