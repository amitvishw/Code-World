#include <stdio.h>
#include <stdlib.h>
void main()
{   int a,r;
    printf("Enter amount:");
    scanf("%d",&a);
    r=a/1000;
    printf("1000X%d",r);
    a=a-r*1000;
    r=a/500;
    printf("\n 500X%d=%d",r,a);
    a=a-r*500;
    r=a/100;
    printf("\n 100X%d",r);
    a=a-r*100;
    r=a/50;
    printf("\n  50X%d",r);
    a=a-r*50;
    r=a/20;
    printf("\n  20X%d",r);
    a=a-r*20;
    r=a/10;
    printf("\n  10X%d",r);
    a=a-r*10;
    r=a/5;
    printf("\n   5X%d",r);
    a=a-r*5;
    r=a/2;
    printf("\n   2X%d",r);
    a=a-r*2;
    printf("\n   1X%d",a);
    
	
}
