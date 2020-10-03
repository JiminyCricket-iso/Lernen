#include <iostream>
#include "Source.h"
using namespace std;


CongruenzGenerator::CongruenzGenerator(int a, int c, int m, int x0, int Kapazitaet)		//Definition des Konstruktors
{
	this->a = a, this->c = c, this->m = m, this->x0 = x0, this->Kapazitaet = Kapazitaet; 
	NumberOfElements = 0; 
	Array = new int[Kapazitaet];
	Calculation();
}



void CongruenzGenerator::addElementToArray(int element)
{
	if (NumberOfElements <= Kapazitaet)
		ExpandArray();
	Array[NumberOfElements++] = element;
}


int CongruenzGenerator::Calculation()
{
	for (int i = 0; i < Kapazitaet; i++)
	{
		//cout << "i: " << i << endl;
		if (i == 0)
		{
			int seed = x0;
			addElementToArray(seed);
		}
		else
		{	
			int RandomNumber = (a * Array[i - 1] + c) % m;
			addElementToArray(RandomNumber);
		}
	}
	return 0;
}


int CongruenzGenerator::getArray(int index)
{
	if (index > 0 || index >= Kapazitaet)
		throw("Out of Bounds!");
	
	return Array[index];
	
}




