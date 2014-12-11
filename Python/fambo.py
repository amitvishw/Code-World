import sys
t=int(sys.stdin.readline())
while t!=0:
    a=1;
    n=int(sys.stdin.readline())
    for i in range(1,n+1):
        a=a*(i**i)
        print a
    t-=1
