#erzeugung von g(x) verteilten zufallszahlen
from random import random
from matplotlib import pyplot as plt 
import numpy as np

class Gewichtete_random_zahlen():

    def f(self,x):               #verteilungsfunktion
        return 1/(np.sqrt(2*np.pi))*np.exp(-(x)**2/2)

    def g(self,x):               #hilfsfunktion
        return np.exp(-x)

#berechnung vomn zufallszahlen, die der verteilung von g(x) (der Hilfsfunktion genügen)
#1. g(x)=c*exp(-cx) | c=konstante |g(x)=PDF (=wahrscheinlichkeitsdichtefunktion)
#2. Bestimmung der CDF funktion: CDF=integrate from 0 to x g(x)dx
#   CDF=1-exp(-cx)
#3. bestimmung der inversen CDF (CDF^(-1)):
#   1-exp(-cx)=u |u=gleichverteilte zufallszahlen. CDF^(-1) wird bestimmt, in dem der ausdruck nach x umgestellt wird 
#   CDF^(-1)=-1/c*log(1-u)=x |1-u=u, weil das mehr oder weniger das gleiche ist
# in unserem fall ist c=1

    def inverse_CDF(self,u):    #g(x) verteilte zufallszahl
        return -np.log(u)
'''
def zufalls_array():
    i=0
    liste=[]
    while i <= 10000:
        liste.append(inverse_CDF(random()))
        i+=1
    return liste
         

x=zufalls_array()
plt.hist(x,density=True, bins=100)
plt.show()
'''
