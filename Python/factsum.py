import sys
n=int(sys.stdin.readline())
s=0
for i in range (1,(n/2)+1):
    if(n%i==0):
        s+=i
print s


        
