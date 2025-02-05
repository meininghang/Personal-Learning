def recur(n:int) -> int:
    """递归"""
    #终止条件
    if n == 1:
        return 1
    #递：递归调用
    res = recur(n-1)
    #归：返回结果
    return n + res

print(recur(99))

def tail_recur(n,res):
    """尾递归"""
    #终止条件
    if n == 0:
        return res
    #尾递归调用
    return tail_recur(n - 1,res + n)
print(tail_recur(99,0))

def fib(n:int) -> int:
    """斐波那契数：递归解法"""
    #终止条件 f(1) = 0,f(2) =1
    if n == 1 or n == 2:
        return n-1
    #递归调用 f(n) = f(n-1) + f(n-2)
    res = fib(n - 1) + fib(n - 2)
    #返回结果
    return res
print(fib(9))

def for_loop_recur(n:int) -> int:
    """使用迭代模拟递归"""
    #使用一个显式的栈来模拟系统调用栈
    stack = []
    res = 0
    #递：递归调用
    for i in range(n,0,-1):
        #通过“入栈操作”模拟“递”
        stack.append(i)
    #归：返回结果
    while stack:
        #通过“出栈操作”模拟“归”
        res += stack.pop()
    # res = 1+2...+n
    return res

print(for_loop_recur(99))