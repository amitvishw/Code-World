def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
t=input()
while t!=0:
    l=raw_input().split()
    a=int(l[0])
    b=int(l[1])
    print gcd(a,b)
    t-=