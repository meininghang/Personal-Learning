import numpy as np 
import matplotlib.pylab as plt 

#阶跃函数
def step_function(x):
    return np.array(x > 0, dtype=np.int)

X = np.arange(-5.0, 5.0, 0.1) #生成 numpy 数组,从-5.0 到 5.0,以 0.1 为单位
Y = step_function(X) #传入参数并实例化

# 绘图
plt.plot(X, Y)
plt.ylim(-0.1, 1.1) #指定 Y 轴范围
plt.show()

