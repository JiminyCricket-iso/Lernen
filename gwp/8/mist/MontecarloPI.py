import random

def approximiere_pi():
    max=100000                   #Wie viele zufällige punkte erzeugt werden
    innerhalb=0
    for i in range(0,max):       
        x=random.uniform(0,1)
        y=random.uniform(0,1)
        if x*x+y*y <= 1:
            innerhalb+=1
    return 4.0*innerhalb / max

print(approximiere_pi())
