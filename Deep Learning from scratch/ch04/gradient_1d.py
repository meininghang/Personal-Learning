import numpy as np
import matplotlib.pylab as plt

#定义 数值微分 函数
def numerical_diff(f, x):
    h = 1e-4 # 0.0001
    return (f(x+h) - f(x-h)) / (2 * h) #中心差分

#数值微分的一个例子
def function_1(x):
    return 0.01*x**2 + 0.1*x

#求导后的切线函数
def tangent_line(f, x):
    d = numerical_diff(f, x)
    print(d)
    y = f(x) - d*x
    return lambda t: d*t + y


#可视化
x = np.arange(0.0, 20.0, 0.1) #以 0.1 为单位,从 0 到 20 的数组 x
y = function_1(x)
plt.xlabel('x')
plt.ylabel('f(x')

tf = tangent_line(function_1, 5)
y2 = tf(x)

plt.plot(x,y)
plt.plot(x, y2)
plt.show()
 