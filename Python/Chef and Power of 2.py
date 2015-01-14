t=input();p=32;s=''
while p>0:
    x=2**p;p-=1
    if x<=t:t=t-x;s=str(x)+" "+s;
print s
