#include <iostream>
#include <stdio.h>

using namespace std;

class KongruenzGenerator
{
	
	private:
		int a;
		int c;
		int m;
		int x0;
		int AnzahlDerZuErzeugendenWerte;
		
		
	public:
		KongruenzGenerator(int a, int c, int m, int x0, int AnzahlDerZuErzeugendenWerte);
		
		double getRandom(int AnzahlDerZuErzeugendenWerte);
	
};

KongruenzGenerator::KongruenzGenerator(int a, int c, int m, int x0, int AnzahlDerZuErzeugendenWerte)
{
	this -> a=a;
	this -> c=c;
	this -> m=m;
	this -> x0=x0; 
	this -> AnzahlDerZuErzeugendenWerte=AnzahlDerZuErzeugendenWerte;
}

double KongruenzGenerator::getRandom(int AnzahlDerZuErzeugendenWerte)
{
	int array[AnzahlDerZuErzeugendenWerte];
	
	for(int i=0; i<AnzahlDerZuErzeugendenWerte; i++)
	{
		if (i==0) array[i] = x0;
		else
		{
			array[i] =  (a*array[i-1]+c)%m;
			cout << array[i] << endl;
		}
	}
	return array;
}

int main(void)
{
	//KongruenzGenerator Werte(4,0,200,1,10);

	
	
	
	
	
	return 0;
}
