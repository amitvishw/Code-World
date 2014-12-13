t=input()
while t!=0:
    l=raw_input().split()
    a=int(l[0])
    b=int(l[1])
    while b!=0:
        r=a%b
        a=b
        b=r
    print a
    t-=1
