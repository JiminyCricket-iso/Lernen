#import matplotlib.pyplot as plt

def lesen(datei):
    with open(str(datei)) as f:
        content_list = [line.strip() for line in f]
        return content_list

def bubblesort(liste):
    n =len(liste)
    for i in range(n-1):
        for j in range(n-i-1):
            if liste[j]>liste[j+1]:
                liste[j], liste[j+1]=liste[j+1], liste[j]
    return liste
  
'''
print(bubblesort(lesen()))
plt.plot(bubblesort(lesen()))
plt.ylabel("Zahlen")
plt.show()
'''