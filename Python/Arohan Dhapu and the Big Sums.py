import sys
t=int(sys.stdin.readline())
while t>0:
    a=sys.stdin.readline()
    for i in range(1,len(a)):
        if a[i]=='-':
            print int(a[0:i])-int(a[i+1:])
            break
        if a[i]=='+':
           print int(a[0:i])+int(a[i+1:])
           break
    t-=1
