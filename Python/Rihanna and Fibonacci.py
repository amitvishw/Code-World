import sys
mod=10**9+7
t=int(sys.stdin.readline())
while t!=0:
    x=raw_input().split()
    f1=int(x[0])
    f2=int(x[1])
    n=int(x[2])
    if n==1:
        print f1&mod
    else:
        if n==2:
            print f2%mod
        else:
            for i in range (2,n):
                f=f1+f2
                f1=f2
                f2=f
            print f%mod
    t-=1
