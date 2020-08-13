import modul
#import matplotlib.pyplot as plt
import os.path
from os import path

def start():
    eingabe=str(input("Bitte zu sortierende Datei geben:"))
    if path.exists(eingabe):
        print(modul.bubblesort(modul.lesen(eingabe)))
    
    else:
        print("Bitte einen existierenden Dateinamen + Pfad eingeben")
        return False





start()
