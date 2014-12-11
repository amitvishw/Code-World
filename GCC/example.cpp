#include<stdio.h>
int rn(int n){
int reverse=0;char d;
while(n!=0){
d=n%10;
reverse=reverse*10+d;
n=n/10;}
return reverse;}
int main()
{
int n,a,b;
scanf("%d",&n);
while(n>0)
{
scanf("%d%d",&a,&b);
printf("%d\n",rn(rn(a)+rn(b)));
n--;
} return 0;}
 
