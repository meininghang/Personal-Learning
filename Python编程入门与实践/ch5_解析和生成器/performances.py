from time import time
mx = 5000

t = time() #for循环的起始时间
floop = []
for a in  range(1,mx):
    for b in range(a,mx):
        floop.append(divmod(a,b))
print('for loop:{:.4f} s'.format(time() - t)) #流逝时间

t = time() #列表解析的起始时间
compr = [
    divmod(a,b) for a in range(1,mx) for b in range(a,mx)
]
print('list comprehension:{:.4f} s'.format(time() - t))

t = time() #生成器表达式的起始时间
gener = list(
    divmod(a,b) for a in range(1,mx) for b in range(a,mx)
)
print('generator expression: {:.4f} s'.format(time() - t))