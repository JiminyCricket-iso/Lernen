class Roboter:

    def __init__(self, name, baujahr):
        self.name = name
        self.baujahr = baujahr

    def SageHallo(self):
        print("Hallo, mein Name ist " + self.name)

    def NeuerName(self, name):
        self.name = name

    def NeuesBaujahr(self, baujahr):
        self.baujahr = baujahr
     
  
if __name__ == "__main__":
    x = Roboter("Marvin", 1979)
    y = Roboter("Caliban", 1993)
    x.SageHallo()
    y.SageHallo()