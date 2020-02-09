import numpy as np 
import matplotlib.pylab as plt

#定义 sigmoid 函数
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

X = np.arange(-5.0, 5.0, 0.1)
Y = sigmoid(X) #传入参数并实例化

#绘图
plt.plot(X, Y)
plt.ylim(-0.1, 1.1) #指定 y 轴范围
plt.show()