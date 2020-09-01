
#include <stdio.h>
#include "Vektor.hpp"
// trottelanleitung zum operatorenüberladen: http://www.wilkening-online.de/programmieren/c++-operator-ueberladung.html#Kapitel_1_1

int main(void)
{
	Vektor v;
	Vektor v1(1,2,3);
	printf("Betrage von v1: %f \n", v1.betrag());
	Vektor v2(4,5,6);
	Vektor v3(7,5,2);
	Vektor x, y;
	x= v1+v2;	 		// Vektoraddition
	cout << x;
	
	y= v1*v2;			//kreuzprodukt
	cout << y;

	
	printf("spatprodukt: %f\n", v.spat(v1,v2,v3));
	cout << v3;
}
