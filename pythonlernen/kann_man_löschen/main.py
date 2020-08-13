from klasse import MyClass

def lulu():
    liste1= [2]
    i=2
    while i < 2000000:
        i += 1
        x = MyClass(i, liste1)
        if x.methode(liste1,i) == False:
            continue
        else:
            liste1.append(i)
    return liste1

        

print(sum(lulu()))
#print("klassenaufruf:", lulu())