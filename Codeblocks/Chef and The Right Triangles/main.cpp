#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3,n,c=0;
    float d1,d2,m,d3,p;
    cin>>n;
    while(n--)
    {
            m=0;
            cin>>x1>>y1>>x2>>y2>>x3>>y3;
            d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
            d2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
            d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
            if(d1>d2&&d1>d3)
            {
                m=d1;
                p=sqrt(d2*d2+d3*d3);
            }
            else
            {
                if(d2>d1&&d2>d3)
                {
                    m=d2;
                    p=sqrt(d1*d1+d3*d3);
                }
                else
                {
                    m=d3;
                    p=sqrt(d1*d1+d2*d2);
                }
            }
            if(m==p)
            {
                c++;
            }
    }
    cout<<c;
    return 0;
}
