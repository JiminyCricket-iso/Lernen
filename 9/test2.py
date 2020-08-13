import math

class Pythagoras():
    
    c_quad=0
    summe=0

    def __init__(self, a_neu, b_neu):
        self.a=a_neu
        self.b=b_neu

    def hyp(self):
        c_quad=self.a**2+self.b**2
        summe=self.a + self.b + math.sqrt(c_quad)
        return c_quad

    def summe(self):
        summe=self.a + self.b + math.sqrt(self.hyp())
        return summe


if __name__=="__main__":
    x=Pythagoras(2,2)
    print(x.hyp())
    print(x.summe())