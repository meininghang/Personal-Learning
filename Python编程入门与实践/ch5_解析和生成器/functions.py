def gcd(a,b):
    """计算（a,b）的最大公约数"""
    while b != 0:
        a,b = b, a % b
    return a
