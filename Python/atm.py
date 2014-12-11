x=raw_input().split()
y=int(x[0])
x=float(x[1])
if(y%5==0 and x>(y+.50)):
    print '%.2f' % (x-y-.50)
else:
    print '%.2f' % x
