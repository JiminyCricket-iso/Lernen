import numpy as np
class berechnung():
    
#    horizont_list = []
#    vertikal_list = []

    def __init__(self, data):
        self.data=data

    def produkt_horizont(self, x, y, datei):    #funktion zurberechnung der vagerechten und horizontalen produkte
        prod = datei[y][x]*datei[y][x+1]*datei[y][x+2]*datei[y][x+3]
        return prod

    def hori_verti(self, datei):                  #berechnet die horizontalen Produkte
        x=0
        y=0
        liste = []
        while y <=(len(datei)-1):
            while x <=(len(datei)-4):
                if x <= (len(datei)-4):
                    liste.append(self.produkt_horizont(x, y, datei))
                    x += 1
                if x == len(datei)-3:
                    x = 0
                    y += 1
                    break
        return liste


    def diag(self, datei):
        x=0     #matrixelement index vertikal
        y=0     #matrixelement index horizontal   
        a=1     #produkt der diagonal elemente
        i=0
        z=0     #index für den iterationszähler der while loop  
        liste=[]
        while z < 2*(len(datei))-1:            
#            print(z)
            if z < len(datei)-1:
                while y <= x:
                    a *= datei[x-i][y]
                    print("z=", z,"x=", x-i, "y=",y, " Matrixeintrag: ", datei[x-i][y])
                    y += 1
                    i += 1
                x += 1
                y = 0
                        #return a

            elif z <= 2*(len(datei))-1:
                print("HHHHHHHHAAAAAAALLLLLLLOOOOOOO")
                while y < (len(datei)):
                    a *= datei[x-i][y]
                    print("z=", z, "i=", i,"x=", x-i, "y=",y, " produkt: ", a)
                    y += 1
                    i += 1
                x = len(datei)-1
                y = z-len(datei)+2
            liste.append(a)
            print("________________________________")

            a=1
            i=0
            z+=1
        return liste



    def diagonal(self):
        diagonal_list = []
        diagonal_list = self.diag(self.data)
        return diagonal_list
            


    def horizontal(self):
        horizont_list = []
        horizont_list=self.hori_verti(self.data)
        return horizont_list

    def vertikal(self):         #Vertikal das gleiche wie horizontal, nur mit transponierter matrix
        vertikal_list = []
        data_transp = np.transpose(self.data)
        vertikal_list = self.hori_verti(data_transp)
        return vertikal_list


        

