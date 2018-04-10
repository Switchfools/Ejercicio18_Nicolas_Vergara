import numpy as np
import matplotlib.pylab as plt
Sol=np.loadtxt('First.txt')
x=np.linspace(0,10,100)
y=np.exp(-x)
plt.plot(Sol[:,0],Sol[:,1])
plt.plot(x,y)
plt.savefig('First.png')
