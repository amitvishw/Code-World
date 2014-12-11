import sys
while True:
    n,k=map(int,sys.stdin.readline().split())
    if n==0 and k==0:
        break
    else:
        c=0
        carry=0
        while(k!=0 or n!=0):
            r1=k%10
            r2=n%10
            k=k/10
            n=n/10
            carry=r1+r2
            if carry>9:
                c+=1
        print c
                
                
