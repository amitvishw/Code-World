t=int(raw_input())
while t!=0:
    c=0;
    a=raw_input()
    for j in range(0,len(a)):
        if a[j]=='A' or a[j]=='D' or a[j]=='O' or a[j]=='P' or a[j]=='Q' or a[j]=='R':
            c+=1
        if a[j]=='B':
            c+=2
    print c
    t-=1
