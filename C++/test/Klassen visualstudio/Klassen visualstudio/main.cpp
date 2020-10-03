#include <iostream>

#include "cone.h"

using namespace std;



int main()

{

    Cone *pCone = new Cone(25.55, 20.15);



    cout << "Cone's Characteristics";

    cout << "\nRadius:       " << pCone->getRadius();

    cout << "\nHeight:       " << pCone->getHeight();

    cout << "\nBase Area:    " << pCone->CalculateBaseArea();

    cout << "\nTotal Area:   " << pCone->CalculateTotalArea();

    cout << "\nTexture Area: " << pCone->CalculateLateralArea() << endl;



	return 0;

}