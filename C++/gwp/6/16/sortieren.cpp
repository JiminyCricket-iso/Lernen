#include <iostream>
#include <stdio.h>
#include <fstream>	//stellt ofstream (schreiben von daten in eine datei) und ifstream (lesen von daten einer datei) bereit
#include <string>	//stellt getline und stof (stof konvertiert string to float) bereit

using namespace std;





int main()
{
	ifstream file; 
	file.open("Zahlen.txt",  ios::in);
	string s;
	int counter=0;
	
	while(!file.eof())		//!file.eof sucht nach dem marker, wenn die datei zuende ist. Erreicht die schleife das ende der datei, wird True zurückgegeben und die schleife wird beendet
	{						//schleife zur bestimmung der array größe, in das die werte aus der text datei geschrieben werden
		
		getline(file,s);
		counter++;
		cout << counter << "\t"<< s << "\t"<< typeid(s).name() <<endl;		// der counter besitzt eine zahl zu viel am ende. könnte daran liegen, dass der marker für das ende der datei in einer neuen zeile steht
	}	
	cout << "counter " << counter << endl;
	
	float array[counter];		// Anlegen des Arrays, in das die Werte der Text Datei geschrieben werden
	
	for(int i=0; i < counter; i++)	//Die werte aus der text Datei in ein array schreiben
	{
		getline(file,s);
		float number = stof(s);
		cout << number << endl;
		array[i] =  number;
	}
	

	
}
