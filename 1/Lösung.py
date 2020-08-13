n= int(input("Maximale zahl eingeben: "))
def teiler(x):
    i=0
    summe3 = 0
    summe5 = 0
    while i < n:
        a=i/3
        b=i/5
     
        if a % 1 == 0.0:
            summe3 += i
        if b % 1 == 0.0:
            summe5 += i
        if a % 1 == b % 1:
            summe5 -= i
        i += 1
    print("die summe der ganzzahligen teiler von "+ str(n) + " mit 3 und 5 lautet: "+ str(summe3+summe5))
    
    
            
teiler(n)