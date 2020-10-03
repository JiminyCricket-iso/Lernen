#pragma once
#include <iostream>
#include <stdio.h>
class CongruenzGenerator {
private:
	int NumberOfElements;
	int Kapazitaet;
	int* Array;
	int a, c, m, x0;

	void InitializeArray(int from)										//Initialisiert das Array f�r die berechneten Zufallswerte
	{
		for (int i = from; i < Kapazitaet; i++)
		{
			Array[i] = 0;
		}
	}

	void ExpandArray()													//Funktion zur dynamischen Erweiterung des Arrays
	{
		
		//Kapazitaet += 0;
		int* tempArray = new int[Kapazitaet];							//Erzeugt ein tempor�res Array mit der neuen Gr��e (Kapazit�t = 2*Kapazit�t)
		for (int i = 0; i < NumberOfElements; i++)						//Kopiert die Elemente des alten Arrays in das (neue) tempor�re Array
		{
			printf("%i\n", Array[i]);
			tempArray[i] = Array[i];
			//printf("%i", tempArray[i]);
		}
		delete[] Array;													//L�schen des alten Arrays
		Array = tempArray;												//Das alte Array gleich dem (neuen) tempArray setzen
		InitializeArray(NumberOfElements);								//Aufrufen der Privaten InitializeArray Methode. D.h. es wird ein neues Array mit der ben�tigten gr��e initialisiert
	}


public:
	CongruenzGenerator(int a, int c, int m, int x0, int Kapazitaet);					//Deklaration des Konstruktor 
	~CongruenzGenerator() { delete[]Array; }								//Deklaration und Definition des Dekonstruktors
	void addElementToArray(int element);
	int Calculation();													//methode zur Berechnung der Zufallszahlen 
	int getArray(int index);
};
