import math

class vector():
    def __init__(self, x=0, y=0, z=0):
        self.x=x
        self.y=y
        self.z=z

    def betrag(self):
        return math.sqrt(self.x**2+self.y**2+self.z**2)
    
    def __add__(self, other):       # operator überladen für vektoraddition
        return self.x + other.x, self.y + other.y, self.z + other.z 

    def __mul__(self, other):       # * operator überladen für kreuzprodukt   
        return (self.y*other.z-self.z*other.y, self.z*other.x-self.x*other.z, self.x*other.y-self.y*other.x)  

    def __and__(self, other):       # & üperladen für skalarprodukt
       return self.x * other.x + self.y * other.y + self.z * other.z 


