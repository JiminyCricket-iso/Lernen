//#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;


class Polynom{
	public:
		Polynom(float x, int a0, int a1, int a2, int a3, int a4, int a5); // Konstruktor Deklaration
		float PolynomBerechnung();
		float AbleitungBerechnung();
		float operator()(float, int, int, int, int, int, int) const; 		//Überladung des ()-Operators


	private:
		float x_;
		int a0_;
		int a1_;
		int a2_;
		int a3_;
		int a4_;
		int a5_;
		
};

Polynom::Polynom(float x, int a0, int a1, int a2, int a3, int a4, int a5):	// definition des Konstruktors
	x_(x),
	a0_(a0),
	a1_(a1),
	a2_(a2),
	a3_(a3),
	a4_(a4),
	a5_(a5)
	{}
/*	
float Polynom::PolynomBerechnung(){
	float Ergebnis=0;
	int koeffizienten[]={a0_,a1_,a2_,a3_,a4_,a5_};
	int ArrayGroesse= sizeof(koeffizienten)/sizeof(int);
	
	for(int i=0; i < ArrayGroesse; i++)
	{
		Ergebnis += koeffizienten[i]*pow(x_,i);
	}
	return Ergebnis;
}
*/

float Polynom::AbleitungBerechnung(){
	float Ergebnis=0;
	int koeffizienten[]={a1_,a2_,a3_,a4_,a5_};
	int ArrayGroesse= sizeof(koeffizienten)/sizeof(int);
	
	for(int i=0; i < ArrayGroesse; i++)
	{
		Ergebnis += (1+i)*koeffizienten[i]*pow(x_,i);
	}
	return Ergebnis;
}


float Polynom::operator()(float x, int a0, int a1, int a2, int a3, int a4, int a5) const{		//Implementierung der Methode zur Operatorüberladung zur berechnung des funktionswertes
	float Ergebnis=0;
	int koeffizienten[]={a0_,a1_,a2_,a3_,a4_,a5_};
	int ArrayGroesse= sizeof(koeffizienten)/sizeof(int);
	
	for(int i=0; i < ArrayGroesse; i++)
	{
		Ergebnis += koeffizienten[i]*pow(x_,i);
	}
	return Ergebnis;
}



int main(void){
	Polynom Polynom1(2.5, 0, 1, 2, 3, 4, 5);	// Instanz Polynom1 erstellen
//	printf("%f\n", Polynom1.PolynomBerechnung());
	printf("Funktionswert, %f\n", Polynom1(2.5, 0, 1, 2, 3, 4, 5));
	printf("Funktionswert der Ableitung, %f\n", Polynom1.AbleitungBerechnung());
	

	
}
