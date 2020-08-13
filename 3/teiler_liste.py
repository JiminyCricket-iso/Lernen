def faktoren(num):
    liste=[]                #liste der ganzzahligen teiler von num
#    num = 13195
    for i in range(2, num):
        fakt = num/i
        if fakt % 1 ==0.0:
            liste.append(fakt)
    return liste   
     
#print(faktoren())




