from pprint import pprint

from functions import gcd

def gen_triples(N):
    for m in range(1,int(N**.5) + 1):
        for n in range(1,m):
            if (m-n) % 2 and gcd(m,n) == 1:
                c = m**2 + n**2
                if c <= N:
                    a = m**2 - n**2
                    b = 2 * m * n
                    yield (a,b,c)

pprint(sorted(gen_triples(50),key=sum))
