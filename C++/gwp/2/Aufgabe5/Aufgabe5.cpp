#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double grad;
	cout << "Bitte Winkel eingeben: ";
	cin >> grad;
	
	//Umrechnung von grad in rad
	double rad = grad * M_PI/180;
	
	double sinus = sin(rad);
	double cosinus = cos(rad);
	double tangens = tan(rad);
	
	cout << "sin(" << rad << ")= " << sinus << endl;
	cout << "cos(" << rad << ")= " << cosinus << endl;
	cout << "tan(" << rad << ")= " << tangens << endl;  
	
	return 0;
}
