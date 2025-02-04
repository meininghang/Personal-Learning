from math import sqrt
mx = 10
triples = [(a,b,sqrt(a**2 + b**2))
           for a in range(1,mx) for b in range(a,mx)]
#这里，我们在一个列表解析中组合 filter和 map 操作
triples = [(a,b,int(c)) for a,b,c in triples if c.is_integer()]
print(triples)