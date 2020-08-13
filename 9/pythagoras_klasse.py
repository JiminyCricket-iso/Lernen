import math

class Pythagoras():
    
    c_quad=0


    def __init__(self, a_neu, b_neu):
        self.a=a_neu
        self.b=b_neu

    def hyp(self):                      #berechnet die hypothenuse c
        c_quad=self.a**2+self.b**2
        return c_quad

    def summe(self):                    #berechnet die summe a*b*c
        sum=self.a + self.b + math.sqrt(self.hyp())
        return sum

    def produkt(self):
        prod=self.a * self.b * math.sqrt(self.hyp())
        return prod



"""
if __name__=="__main__":
    x=Pythagoras(2,3)
    print(x.hyp())
    print(x.summe())
"""
    