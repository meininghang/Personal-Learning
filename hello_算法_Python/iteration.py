from pprint import pprint

def for_loop(n:int) -> int:
    """for 循环"""
    res = 0
    #循环求和 1，...n
    for i in range(1, n + 1):
        res += i
    return res

print(for_loop(8009))

def while_loop(n:int) -> int:
    """while 循环"""
    res = 0
    i = 1 #初始化条件变量
    #循环求和 1，...n
    while i <= n:
        res += i
        i += 1 #更新条件变量
        
    
    return res

print(for_loop(8009))

def nested_for_loop(n:int) -> str:
    """双层 for♻️循环"""
    res = ""
    #循环 is，2,3...n
    for i in range(1,n+1):
        #循环 j = 1,2,3...n 
        for j in range(1,n+1):
            res += f"({i},{j}),"
    return res
pprint(nested_for_loop(8))