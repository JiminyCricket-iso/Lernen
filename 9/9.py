from pythagoras_klasse import Pythagoras
import math

def aufgabe9():
    b = 1
    a = 0
    prod = 0   #produkt a*b*c
    summ = 0   #summe a+b+c
    while summ != 1000.0:
        if a < b:
            while a < b:
                x = Pythagoras(a,b)
                summ = x.summe()
                prod = x.produkt()
                if prod % 1 != 0:
                    a += 1
                if prod % 1 == 0:
                    if summ != 1000:
                        #print("a: ", a, " b: ", b, " c: ", math.sqrt(x.hyp()), "a+b+c= " , summ, " a*b*c= ", prod)
                        a += 1
                    if summ == 1000:
                        print("a: ", a, " b: ", b, " c: ", math.sqrt(x.hyp()), "a+b+c= " , summ, " a*b*c= ", prod)
                        break
                        
        if b == a:
            b += 1
            a = 0

aufgabe9()

