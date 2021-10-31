import math

m,n=map(int, input().split())
i=m
s=0
for i in range(m,n+1):
    s=s+pow(i,2)+1/i
print('sum = '+"%.6f" %s)