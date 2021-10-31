sxdw=["","拾","佰","仟","万","拾","佰","仟","亿","拾","佰","仟"]
sz=["零","壹","贰","叁","肆","伍","陆","柒","捌","玖"]

def handle(num, t):
    if num>=10:
        handle(num//10, t+1)
    if num%10!=0:
        print(sz[num%10]+sxdw[t],end="")
    else:
        print(sz[num%10]+sxdw[t],end="")
    return

n=int(input())
handle(n,0)
print('圆')



# sxdw=["","十","百","千","万","十","百","千","亿"]
# sz=["零","壹","贰","叁","肆","伍","陆","柒","捌","玖"]

# def handle(num, t):
#     if num>=10:
#         handle(num//10, t+1)
#     if num%10!=0:
#         print(sz[num%10]+sxdw[t],end="")
#     else:
#         print(sz[num%10],end="")
#     return

# n=int(input())
# handle(n,0)
# print('圆')