#include <iostream>
#include <math.h>
#include "cone.h"
using namespace std;

Cone::Cone() : _rad(0.00), _hgt(0.00) { cout << "Konstruktor1" << endl; }

Cone::Cone(double r, double h) : _rad(r), _hgt(h) { cout << "Konstruktor2" << endl; }

//Cone::Cone(const Cone& c): _rad(c._rad), _hgt(c._hgt){}

Cone::Cone(const Cone& c)
{
	cout << "kopierkonstruktor" << endl;
	_rad = c._rad;
	_hgt = c._hgt;
}

Cone::~Cone() {}

double Cone::CalculateBaseArea() const
{
	return _rad * _rad * 3.14159;
}

double Cone::CalculateLateralArea() const
{
	double radius2 = _rad * _rad;
	double height2 = _hgt * _hgt;
	double slantHeight = sqrt(radius2 + height2);

	return 3.14159 * _rad * slantHeight;
}

double Cone::CalculateTotalArea() const
{
	return CalculateBaseArea() + CalculateLateralArea();
}

double Cone::CalculateVolume() const
{
	return (3.14159 * _rad * _rad * _hgt) / 3;
}
