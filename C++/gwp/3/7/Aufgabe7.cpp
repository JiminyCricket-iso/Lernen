#include <iostream>
#include <cmath>

using namespace std;

double Fakultaet(unsigned int fak)
{
	if(fak>=0)
	{
		if(fak==0) return 1;
		else return fak * Fakultaet(fak-1);
	}
}

double Power(double x, unsigned int n)
{
	int foo=1;			//hilfs variable
	for(unsigned int i=1; i<=n; i++)
	{
		foo*=x;
	}
	return foo;
}

double MyExp(double x, double n)
{
	unsigned int i=0;
	double sum=0;544
	while(i<=n)
	{
		sum += Power(x,i)/Fakultaet(i);
		i++;
	}
	return sum;
}

int main(void)
{
	double x;
	unsigned int n;
	cout << "Bitte Exponent(x) eingeben: ";
	cin >> x;
	cout << "Genauigkeit (n): ";
	cin >> n;
	
	
	cout << Fakultaet(n)<<endl;
	cout << fixed <<Power(x,n)<< endl;
	cout << "Meine Exponential funktion: exp("<<x<<") = " << MyExp(x,n)<<endl;
	cout <<	"Exponentialfunktion aus der cmath Bibliothek: exp("<<x<<") = " << exp(x)<< endl;
	cout << "differenz zwischen den beiden funktionen: " << MyExp(x,n)-exp(x)<< endl;
}
