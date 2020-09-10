#include <iostream>
#include <stdio.h>
#include <fstream>	//stellt ofstream (schreiben von daten in eine datei) und ifstream (lesen von daten einer datei) bereit
#include <string>	//stellt getline und stof (stof konvertiert string to float) bereit

//Die exe des Programm von Terminal aus starten. in Windows mit der Powershell. wobei nach .\sortieren die text datei angegeben werden muss, die sortiert werden soll, also: .\sortieren Zahlen.txt 

using namespace std;


int main(int argc, char** argv)
{
	string s;
	fstream file;
	file.open(argv[1], ios::in);
	
	if(!file)		//überprüft on die datei existiert, die dem programm übergeben wird
	{
		cout << "die datei existiert nicht. bitte richtigen dateinamen bzw. dateipfad angeben." << endl;
		exit(1);
	}
	
	int counter=0;
	
	while(getline(file,s))		//schleife zur bestimmung der array größe
	{
		counter++;
	}

	file.clear();	
	/* clear() resets the error flags on a stream (as you can read in the documentation). 
	 * If you use formatted extraction, then the error flag "fail" will be set if an extraction 
	 * fails (e.g. if you're trying to read an integer and there isn't anything parsable). So if 
	 * you're using the error state to terminate the loop, you have to make the stream usable again 
	 * before going into the next loop.*/
	
	file.seekg(0);	//Setzt die position des iterators auf null. also an den anfang der datei
	float array[counter];
	
	for(int i=0; i<counter; i++)	//Füllt ein array mit den floats der eingelesenen datei
	{
		getline(file,s);
		float zahl=stof(s);
		array[i]= zahl;
	}

	
	//BubbleSort:
	float HilfsVariable;
	for(int i=counter; i>1; i--)
	{
		for(int j=0; j<counter-1; j++)
		{
			if(array[j] > array[j+1])
			{ 
				HilfsVariable=array[j];
				array[j]=array[j+1];
				array[j+1]=HilfsVariable;
			}
		}
	}
	
	for(int i=0; i<counter; i++)	//gibt die sortierten Zahlen im terminal aus
	{
		cout << array[i] << endl;
	}
}





