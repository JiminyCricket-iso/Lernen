import math as m

class Newton():
    def __init__(self, f, h=10E-5):     #funktion f initiieren
        self.__f=f
        self.__h=h

    def __get_h(self):              #getter für h
        return self.__h

    def __set_h(self, h):              #setter für h
        self.__h=h

    h = property(__get_h, __set_h)  #property um private variable h zu ändern

    def __call__(self, x_start):    #übergabe des startwertes für das newtonverfahren
        self.__x_start=x_start
    

    
    def SymmetrischerDifferenzenquotient(self, x):
        return (self.__f(x+self.__h)-self.__f(x-self.__h))/(2*self.__h)

    def verfahren(self):        #newtonverfahren
        x_new=0
        x_old=0
        x_new = self.__x_start - self.__f(self.__x_start)/self.SymmetrischerDifferenzenquotient(self.__x_start)
        
        return x_new
 
    


if __name__ == "__main__":
    f=Newton(m.sin)  
    f(2)
#    print(f.SymmetrischerDifferenzenquotient(1))    

print(f.verfahren())

'''
    print(f.h)
    f.h=30
    print(f.h)
'''
