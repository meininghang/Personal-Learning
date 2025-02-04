from math import sqrt
mx = 10
#我们可以在一个解析中组合生成和过滤
triples = [(a,b,int(c))
           for a in range(1,mx) for b in range(a,mx)
           if (c:=sqrt(a**2 + b**2)).is_integer()]
print(triples)
