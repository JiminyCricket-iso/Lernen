def merge():                        #Datei einlesen und die ganzen Zeilendelimiter entfernen
    with open("zahl.txt") as f:
        a="".join(line.strip() for line in f)
        return a

number=merge()

def produkt(y):                 #Produkt der zahlen berechnen
    res=1
    x=y+12                       #für 4 multiplikatoren y+3 für 13 multiplikatoren y+12
    while y <= x:
        res *=int(number[y])
        y+=1
    return res



def max_prod():                     #eine Liste mit den berechneten produkten füllen
    x=0
    produkt_liste=[]
    while x <= (len(number)-13):         #für 4 multiplikatoren len(number)-4, für 13 multiplikatoren len(number)-13
#        print(x, " ",number[x],"*",number[x+1],"*",number[x+2],"*",number[x+3],"=", produkt(x))
        produkt_liste.append(produkt(x))
        x+=1
#    print(produkt_liste)
    return produkt_liste
    

#print(max_prod())

liste = max_prod()

def bubble_sort():                  #Sortieren der liste
    for x in range(0, len(liste)-1):
        for y in range(0,len(liste)-1-x):
            if liste[y] > liste[y+1]:
                liste[y], liste[y+1]=liste[y+1], liste[y]
    return liste

print(bubble_sort())




