import numpy as np 
import scipy.integrate as integrate
from matplotlib import pyplot as plt
import math
from random import random
import FunktionenKlasse
from FunktionenKlasse import Gewichtete_random_zahlen


# https://www.youtube.com/watch?v=WFswb-zLe4Y
# in unserem fall ist g(x) immer größer als f(x), i.a. ist das aber nicht
# der fall. deswegen muss die hilfsfunktion g(x) mit einer konstanten 
# multipliziert werden. diese dient dazu g(x) besser an f(x) anzupassen, was auch hier der fall ist
# die konstante k lässt sich wie folgt bestimmen: k= f(x)/g(x)=1/root(2*pi)*(1-x)*exp(-x^2/2+x)
# zurbestimmung von x (kurvendiskussion) verwendet man d/dx f(x)/g(x)=0 -> x=1
# somit folgt für k(x=1)=root(exp/(2*pi))

k=np.sqrt(np.e/(2*np.pi))
instanz=Gewichtete_random_zahlen()
def ZufallsZahlenListe():       #erstellung einer liste von gaußverteilten Zufallszahlen
    i=0
    liste=[]
#  instanz=Gewichtete_random_zahlen()
    while i <= 100000:
        u1= random()    #Zufallszahl für vergleichsfunktion
        u2= random()    #coinflip ob positive oder negativer teil der verteilung
        u = random()   #gleichförmig verteilte zufallszahl für f(v) und g(v) (siehe wikipedia)
        x = instanz.inverse_CDF(u)  #g verteilte zufallszahl  
        if u2<0.5:      #positive seite der gaußverteilung
            if (u1*k*instanz.g(x))<instanz.f(x):
                liste.append(x)
                i+=1
        else:           #negative seite der Gaußverteilung
            if (u1*k*instanz.g(x))<instanz.f(x):
                liste.append(-x)
                i+=1
    return liste


x=np.arange(-5,5,0.1)
y=instanz.f(x)
liste=ZufallsZahlenListe()
plt.plot(x,y,'r')
plt.hist(liste,density=True, bins=100)
plt.show()