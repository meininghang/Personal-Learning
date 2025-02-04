def get_squares(n):#传统的函数方法
    return [x ** 2 for x in range(n)]
print(get_squares(10))

def get_squares_gen(n): #生成器方法
    for x in range(n):
        yield x ** 2 #生成结果，但不返回
print(list(get_squares_gen(10)))