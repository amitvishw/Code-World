#include<iostream>
#define ROW 20
#define COL 20
using namespace std;
int main()
{
	int A[ROW][COL],B[ROW][COL],C[ROW][COL];
	int i,j,k,sum=0,m1,n1,m2,n2;
	cin>>m1>>n1;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			cin>>A[i][j];
		}
	}
	cin>>m2>>n2;
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				cin>>B[i][j];
			}
		}
		for (i=0;i<m1;i++)
   		{
			for (j=0;j<n1;j++)
      			{
			        for (k=0;k<m2;k++)
       				{
        				sum = sum + A[i][k]*B[k][j];
        			}
				C[i][j]=sum;
        			sum = 0;
      			}
    		}
 		for (i=0;i<m1;i++)
		{
	      		for (j=0;j<n1;j++)
	        	{
				cout<<C[i][j]<<" ";
			}
			cout<<"\n";
   		 }
	  }
 
  return 0;
}
	
