def polynom(array, x):      #array, ist das koeffizientenarray                  
    f=0
    b=0                    #exponent
    for i in array:
        f += (x**b)*i           
        b += 1
    return f                #a0*x^0+a1*x^1+a2*x^2+a3*x^3+a4*x^4+a5*x^5


def berechnung(array):
    x=(-2)
    while x <= 2.01:
        print("x= ", x, "Funk.wert= ", polynom(array,x))
        x += 0.01


berechnung([0,1,2,3,4,5])
    