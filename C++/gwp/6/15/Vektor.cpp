#include <math.h>
#include "Vektor.hpp"
// trottelanleitung zum operatorenüberladen: http://www.wilkening-online.de/programmieren/c++-operator-ueberladung.html#Kapitel_1_1


double Vektor::betrag() const
{
	return sqrt(x*x+y*y+z*z);
}


Vektor Vektor::operator+ (const Vektor &vektor2) const		//definition der Operatorüberladung für vektor addition
{
	Vektor vektor3;
	vektor3.x = x + vektor2.x;
	vektor3.y = y + vektor2.y;
	vektor3.z = z + vektor2.z;	
	return Vektor(vektor3.x, vektor3.y, vektor3.z);	
}


Vektor Vektor::operator* (const Vektor &vektor2) const	//definition der Operatorüberladung für vektor kreuzprodukt
{
	Vektor vektor3;
	vektor3.x = y*vektor2.z - z*vektor2.y;
	vektor3.y = z*vektor2.x - x*vektor2.z;
	vektor3.z = x*vektor2.y - y*vektor2.x;
	return Vektor(vektor3.x, vektor3.y, vektor3.z);
} 


Vektor Vektor::skalar(const Vektor &vektor2) const
{
	return Vektor(x*vektor2.x+y*vektor2.y+z*vektor2.z);
}


double Vektor::spat(const Vektor &vektor1, const Vektor &vektor2, const Vektor &vektor3) const
{
	double Ergebnis;
	Ergebnis =  (vektor1.y*vektor2.z - vektor1.z*vektor2.y)*vektor3.x + 
				(vektor1.z*vektor2.x - vektor1.x*vektor2.z)*vektor3.y +
				(vektor1.x*vektor2.y - vektor1.y*vektor2.x)*vektor3.z;		
	return Ergebnis;
}


ostream& operator<< (ostream& out, const Vektor& eintrag)		//definition der funktion zur überladung des << operators
{
	return out << "[" << eintrag.x << "," << eintrag.y << "," << eintrag.z << "]" << endl;
}
/*
int main(void){
	Vektor v;
	Vektor v1(1,2,3);
	printf("Betrage von v1: %f \n", v1.betrag());
	Vektor v2(4,5,6);
	Vektor v3(7,5,7);
	Vektor x, y;
	x= v1+v2;	 		// Vektoraddition
	x.print();
	
	y= v1*v2;			//kreuzprodukt
	y.print();
	
	printf("spatprodukt: %f\n", v.spat(v1,v2,v3));
	cout << v3;
	}
*/
