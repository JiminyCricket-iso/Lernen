class Roboter():

    def __init__(self, name, baujahr):
        self.__name = name
        self.__baujahr = baujahr

    def __repr__(self):
        return "Roboter(\"" + self.__name + "\"," +  str(self.__baujahr) +  ")"
    
    def __str__(self):
        return "Name: "+self.__name+", Baujahr: "+ str(self.__baujahr)

    def SageHallo(self):
        print("Hallo, mein name ist "+self.__name)

    def NeuerName(self, name):
        self.__name=name

    def HoleNamen(self):
        return self.__name

    def NeuesBaujahr(self):
        self.__baujahr=baujahr

    def HoleBaujahr(self):
        return str(self.__baujahr)

if __name__=="__main__":
    x = Roboter("Marvin", 1979)
    y = Roboter("Caliban", 1993)
    for rob in [x,y]:
        rob.SageHallo()
        print("ich bin " + rob.HoleBaujahr() + " erschaffen worden. ")
        print(rob)
