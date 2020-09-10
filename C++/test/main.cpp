#include <iostream>
#include "cone.hpp"
using namespace std;

int main()
{
	/*
	Cone iceCone;
	Cone *pCone = &iceCone;
	
	double radius, height;
	
	cout << "Enter the cone's dimensions \n";
	cout << "Radius: ";
	cin >>  radius;
	cout << "Height: ";
	cin >> height;
	
	pCone -> setRadius(radius);
	pCone -> setHeight(height);
	*/
	
	Cone *pCone = new Cone(25.55, 20.15);
	
	cout << "Cone's Charakteristics";
	cout << "\n Radius: \t" << pCone -> getRadius();
	cout << "\n Height: \t" << pCone -> getHeight();
	cout << "\n Base Area: \t" << pCone -> CalculateBaseArea();
	cout << "\n Total Area: \t" << pCone -> CalculateTotalArea();
	cout << "\n Texture Area: \t" << pCone -> CalculateLateralArea() << endl;
	
	return 0; 
	
}
