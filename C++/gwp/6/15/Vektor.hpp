#pragma once
#include <iostream>
using namespace std;
// trottelanleitung zum operatorenüberladen: http://www.wilkening-online.de/programmieren/c++-operator-ueberladung.html#Kapitel_1_1

class Vektor
{
	public:
		//Vektor():x(0), y(0), z(0){}
		Vektor(double a=0, double b=0, double c=0): x(a), y(b), z(c) {}	//Deklaration und Definition des Konstruktors
		
		double betrag() const;											//deklaration der Methode zur berechnung des betrages
		Vektor skalar(const Vektor&) const;								//deklaration der Methode zur berechnung des skalarproduktes zweier vektoren
		double spat(const Vektor&, const Vektor&, const Vektor&) const;				//deklaration der Methode zur berechnung des spatproduktes
		Vektor operator+ (const Vektor &vektor2) const;					//deklaration der Operatorüberladung für vektor addition
		Vektor operator* (const Vektor &vektor2) const;					//deklaration der Operatorüberladung für vektor kreuzprodukt 
				
		friend ostream& operator<< (ostream&, const Vektor&);			//Deklaration der friend Methode zur überladung des << operators. es muss eine friendfunktion verwendet werden, da in fremde klassen keine Element-Funktionen von außen eingeschläußt werden können
		
	private: 
		double x;
		double y;
		double z;
};
