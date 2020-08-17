#include <iostream>
#include "polynom.hpp"
using namespace std;


int main(void)
{
		int koeff1[]={0,1,2,3,4,5};
		int x1 = 2;
		int Array1Groesse= sizeof(koeff1)/sizeof(int);
		cout << "Polynom1= 0*2^0+1*2^1+2*2^2+3*2^3+4*2^4+5*2^5= " <<polynom(x1, koeff1, Array1Groesse) << endl;
		
		int koeff2[] = {6,5,9,7,2,1};
		int x2 = 4;
		int Array2Groesse= sizeof(koeff2)/sizeof(int);
		cout << "Polynom2= 6*4^0+5*4^1+9*4^2+7*4^3+2*4^4+1*4^5= " <<polynom(x2, koeff2, Array2Groesse) << endl;
		
		return 0;
}
