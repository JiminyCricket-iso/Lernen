import math

class PrimeClass():

    def __init__(self, zahl, liste1):
        self.zahl=zahl
        self.liste1=liste1
        
    def methode(self, zahl, liste1):
        for i in self.liste1:
            if i <= math.sqrt(self.zahl):
                a= self.zahl%i
                if a !=0:
                    continue
                else:
                    return False
            else:
                break
