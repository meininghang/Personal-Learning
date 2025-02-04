from pprint import pprint


def fibonacci(N):
    """返回到 N 为止所有斐波那契数"""
    result = [0]
    next_n = 1
    while next_n <= N:
        result.append(next_n)
        next_n = sum(result[-2:])
    return result

pprint(fibonacci(0))
pprint(fibonacci(1))
pprint(fibonacci(100))