import fractions
t=input()
while t!=0:
    l=raw_input().split()
    a=int(l[0])
    b=int(l[1])
    print fractions.gcd(a,b)
    t-=1
