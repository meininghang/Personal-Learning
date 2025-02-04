from pprint import pprint


def fibonacci(N):
    """返回到 N 为止所有的斐波那契数"""
    yield 0
    if N == 0:
        return
    a = 0
    b = 1
    while b <= N:
        yield b
        a,b = b,a+b

pprint(list(fibonacci(0)))
pprint(list(fibonacci(1)))
pprint(list(fibonacci(100)))