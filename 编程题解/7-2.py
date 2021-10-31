import math

a=input()
b=str("{:.3f}".format(math.sqrt(int(a))))
i=len(b)
r=b
while (i<30):
    r='+'+r
    i+=1
print(r)