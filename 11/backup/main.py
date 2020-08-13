import numpy as np
from Klasse import berechnung


data = np.genfromtxt("matrix.txt", usecols=range(20))

print(len(data))

x=berechnung(data)
print(x.horizontal())
#print("________________________________________")
print(x.vertikal())

print(x.diagonal())
