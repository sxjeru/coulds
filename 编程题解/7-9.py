import sys

a, b, c = map(int, input().split())
max=max(a,b,c)
min=min(a,b,c)
if a!=max and a!=min:
    print(str(min)+'->'+str(a)+'->'+str(max))
    sys.exit()
if b!=max and b!=min:
    print(str(min)+'->'+str(b)+'->'+str(max))
    sys.exit()
else:
    print(str(min)+'->'+str(c)+'->'+str(max))
    sys.exit()