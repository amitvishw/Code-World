#include <iostream>
using namespace std;
int main()
{
    int n,num,k,t=0,i;
    cin>>n>>k;
    while(n--)
    {
  	  cin>>num;
  	  if(num%k==0)
  	  {
  	  t+=1;
  	  }
    }
    cout<<t<<"\n";
    return 0;
} 
