import numpy as np
import matplotlib.pylab as plt

def relu(x):
    return np.maximum(0, x)

x = np.arange(-5.0, 5.0, 0.1)
y = relu(x) #传入参数并实例化

#绘图
plt.plot(x,y)
plt.ylim(-1.0, 5.5)
plt.show()