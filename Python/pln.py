def rvrs(n):
    s=0
    while n!=0:
        r=n%10
        s=s*10+r
        n=n/10
    return s
        
t=int(raw_input())
while t!=0:
    c=0
    a=int(raw_input())
    while True:
        n=rvrs(a)
        if n==a:
            break
        a+=n
        c+=1
    print c,n
    t-=1
    
    
        

