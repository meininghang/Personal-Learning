from pprint import pprint


def fibonacci(N):
    """返回到 N 为止所有的斐波那契数"""
    a,b = 0,1
    while a<= N:
        yield a
        a,b = b,a+b

pprint(list(fibonacci(100)))