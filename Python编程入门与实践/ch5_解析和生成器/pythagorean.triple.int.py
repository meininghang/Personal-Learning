from math import sqrt
mx = 10
triples = [(a,b,sqrt(a**2 + b**2))
           for a in range(1,mx) for b in range(a,mx)]

triples = filter(lambda triple:triple[2].is_integer(),triples)
#使元组的第 3 个数也是整数
triples = list(
    map(lambda triple:triple[:2] + (int(triple[2]),),triples)
)
print(triples)