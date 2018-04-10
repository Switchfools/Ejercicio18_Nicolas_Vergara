import numpy as np
import matplotlib.pylab as plt
Sol=np.loadtxt('Second.txt')
figure()
x=np.linspace(0,10,100)
y=np.cos(x)
plt.plot(Sol[:,0],Sol[:,1])
plt.plot(x,y)
plt.savefig('Second.png')
figure()
plt.plot(Sol[:,1],Sol[:,2])
plt.savefig('SecondCircle.png')
