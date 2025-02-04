from pprint import pprint

A = 100
ex1 = [A for A in range(5)]
pprint(A)

ex2 = list(A for A in range(5))
pprint(A)

ex3 = {A:2 * A for  A in range(5)}
pprint(A)

ex4 = {A for A in range(5)}
pprint(A)

s = 0
for A in range(5):
    s += A
pprint(A)