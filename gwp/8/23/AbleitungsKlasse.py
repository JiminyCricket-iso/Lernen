class Ableitung():
    def __init__(self, x0, h=1):
        self.__h=h
#        self.__koeffizienten=koeffizienten
        self.__x0=x0

    def __get_h(self):      #getter für h
        return self.__h

    def __set_h(self, h):   #setter für h
        self.__h=h

    h = property(__get_h, __set_h)  #property im private variable h zu ändern

    def __call__(self, *koeffizienten):             #klammeroperator überladen
        self.ArtDerAbleitung(koeffizienten)


    def ArtDerAbleitung(self,koeffizienten):
        print('welcher Differentialquotient soll berchnet werden? \nNormaler Differentialquotient: Press 1 \nSymmetriescher Differentialquotient: Press 2')
        eingabe=int(input('Ihre Eingabe: '))
        if eingabe==1:
            print('Es wurde die methode des Differenzenquotientes aufgerufen')
            print('Der Funktionswert der ableitung an der stelle ',self.__x0, 'beträgt: ', self.differenzenqoutient(koeffizienten))
        elif eingabe==2:
            print('Es wurde die methode des Symmetrischendifferenzenquotientes aufgerufen')
            print('Der Funktionswert der ableitung an der stelle ',self.__x0, 'beträgt: ', self.SymmetrischerDifferenzenquotient(koeffizienten))
        else:
            print('methode existiert nicht')

    def differenzenqoutient(self, koeffizienten):
        funktion=0
        for i in range(len(koeffizienten)):
            if i == 0:
                funktion += koeffizienten[i]
            else:
                funktion +=koeffizienten[i]*(self.__x0**i+self.__h)**i
        return funktion/self.__h

    def SymmetrischerDifferenzenquotient(self, koeffizienten):
        funktion=0
        for i in range(len(koeffizienten)):
            if i == 0:
                funktion += koeffizienten[i]- koeffizienten[i]     # eig unsinn da =0, aber für die vollständigkeit
            else:
                funktion += koeffizienten[i]*(self.__x0**i+self.__h)**i-koeffizienten[i]*(self.__x0**i-self.__h)**i
        return funktion/(2*self.__h)


        
        

if __name__=='__main__':
#    x=Ableitung(1, 0.00001, 2, -3, 1)       #(x0, h, a0, a1, a2,...)
#    print(len(x.printkoeff()))
    x=Ableitung(1, 0.0001)      #die instanz wird mit den parametern x0 und h instanziiert
    x(2,-3,1)                   #der klammeroperator wurde überladen und ihm werden die koeffizienten des polynomes übergeben.

'''
    print(x.h)       # variable h lesen und ändern
    x.h=30
    print(x.h)
'''
