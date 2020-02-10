import numpy as np
import matplotlib.pylab as plt

#定义 sigmoid 函数
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

#定义 step_function函数
def step_function(x):
    return np.array(x > 0, dtype=np.int)

#数据定义和实例化
x = np.arange(-5.0, 5.0, 0.1)
y1 = sigmoid(x)
y2 = step_function(x)

#绘图
plt.plot(x, y1)
plt.plot(x, y2, 'k--')
plt.ylim(-0.1, 1.1) #指定 y 轴范围
plt.show()