from math import sqrt,ceil

def get_primes(n):
    """计算最大不超过n的质数列表"""
    primeslist = []
    for candidate in range(2, n + 1):
        is_prime =  True
        root = ceil(sqrt(candidate)) #除法限制
        for prime in primeslist: #我们只对质数进行尝试
            if prime > root:
                break
            if candidate % prime == 0:
                is_prime = False
                break
        if is_prime:
            primeslist.append(candidate)
    return primeslist