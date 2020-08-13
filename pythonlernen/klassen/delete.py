class Roboter():
    def __init__(self, name):
        print(name+ " wurde erschaffen")
    
    def __del__(self):
        print(self.name + "sagt bye-bye.")
        print("Es gibt " + self.name + "nicht mehr")

if __name__=="__main__":
    x = Roboter("Ticktock")
    y = Roboter("Jenkins")

    z = x
    print("deleting x")
    del x
    print("deleting z")

    del z
    del y