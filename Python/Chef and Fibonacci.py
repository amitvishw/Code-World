import sys
mod=10**9+7
def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
t=int(sys.stdin.readline())
while t>0:
    a,b=map(int,sys.stdin.readline().split())
    c=gcd(a,b)
    f=0
    s=1
    n=0
    if c==1:
        print s
    else:
        for i in range(0,c-1):
            n=f+s
            f=s
            s=n
        print n%mod
    t-=1
