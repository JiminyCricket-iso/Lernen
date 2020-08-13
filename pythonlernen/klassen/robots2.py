class Roboter():
    
    def __init__(self, name, baujahr):
        self.name=name
        self.baujahr=baujahr
    
    def __repr__(self):
        return "Roboter(\""+self.name+"\","+str(self.baujahr)+")"

    def __str__(self):
        return "Name: "+self.name+", Baujahr: " +str(self.baujahr)

if __name__=="__main__":
    x = Roboter("marvin",1979)
    
    x_str=str(x)
    print(x_str)
    print("Type von x_str: ", type(x_str))
    x_repr=repr(x)
    print(x_repr, type(x_repr))    
    neu=eval(x_repr)
    print(neu)
    print("Typ von neu: ", type(neu))