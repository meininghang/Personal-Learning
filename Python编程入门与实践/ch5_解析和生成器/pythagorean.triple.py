from math import sqrt
#生成所有可能的配对
mx = 10
triples = [(a,b,sqrt(a**2 + b**2))
          for a in range(1,mx) for b in range(a,mx)
          ]

#过滤掉所有非勾股数
triples = list(
    filter(lambda triple: triple[2].is_integer(),triples)
)

print(triples)