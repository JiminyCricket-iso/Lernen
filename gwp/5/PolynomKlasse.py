class polynom():
    def __init__(self, a0, a1, a2, a3, a4, a5):
        self.__a0=a0
        self.__a1=a1
        self.__a2=a2
        self.__a3=a3
        self.__a4=a4
        self.__a5=a5


    def poly_dictionary(self):   #schlüssel = koeffizient, obkejt = exponent
        poly_dict={self.__a0:0, self.__a1:1, self.__a2:2, self.__a3:3, self.__a4:4, self.__a5:5}
        return poly_dict
    
    def ableitungs_dictionary(self):       
        abl_dict={}
        for i in self.poly_dictionary():
#            print("schlüssel: ", i, "objekt:", self.poly_dictionary()[i])
            if self.poly_dictionary()[i] == 0:
                abl_dict[i*0] = 0
            else:
                abl_dict[i*self.poly_dictionary()[i]] = self.poly_dictionary()[i]-1
        return abl_dict



    def __call__(self, x):              #() operator überladen zur berechnung des funktionswertes
        f=0
        for i in self.poly_dictionary():
#            print("schlüssel: ", i, "objekt:", self.poly_dictionary()[i])           
            f += i*x**self.poly_dictionary()[i]
        return f

