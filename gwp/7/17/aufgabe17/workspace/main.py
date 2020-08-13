from KongruenzGenerator import Kongruenz

from matplotlib import pyplot
from mpl_toolkits.mplot3d import Axes3D
from pylab import figure







def numbers(n):     #generates a list of random numbers
    x=1
    liste=[]
    while x <= n:
        if x==1:
            instanz=Kongruenz(65539, x, 0, 2**31)     #(a,x,c,m)
            liste.append(instanz.generator())
            x += 1
        else:
            instanz=Kongruenz(65539,liste[x-2],0,2**31)
            liste.append(instanz.generator())
            x += 1
    return liste
            
#print(numbers(999))

def tupel(liste):
    liste_tupel=[]
    x=0
    while x <= len(liste)-3:
        a=(liste[x],liste[x+1],liste[x+2])
        liste_tupel.append(a)
        x+=3
    return liste_tupel

#print(tupel(numbers(30000)))

def save_list(liste):
    with open("Random_List.txt", "w") as fp:
        fp.write("\n".join("%s %s %s" % x for x in liste))


#save_list(tupel(numbers(30000)))


#mit dem folgenden codeteil werden die zufallszahlen geplottet
liste1=tupel(numbers(30000))
fig=figure()
ax=Axes3D(fig)

for i in range(len(liste1)):
    ax.scatter(liste1[i][0],liste1[i][1],liste1[i][2],color="b")

ax.set_xlabel("x")
ax.set_ylabel("y")
ax.set_zlabel("z")
pyplot.show()