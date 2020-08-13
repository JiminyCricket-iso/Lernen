import matplotlib.pyplot as plt
import random
import math
import numpy as np
from mpl_toolkits import mplot3d
from scipy.interpolate import griddata


def zufallszahlen():
    liste=[]
    i=0
    while i <= 10000:
        
        x = random.uniform(1,100)
        y = random.uniform(-2,3)
        z = random.uniform(-1,1)
        if (z*z+(math.sqrt(x*x+y*y)-3))**2 <= 1:
            liste.append((x,y,z))
            i+=1
            print(i)
        else:
            continue
    return liste       

def plotdata():
    liste=zufallszahlen()
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    
    x,y,z= zip(*liste)
    ax.scatter(list(x), list(y), list(z), color='black')
    plt.show()
    
    
    

plotdata()


#ax = plt.axes(projection='3d')
#ax.scatter3D(zufallszahlen()[0], zufallszahlen()[1], zufallszahlen()[2], c=zufallszahlen()[2], cmap='Greens')