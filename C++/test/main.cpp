#include <iostream>

#include "cone.hpp"

using namespace std;



int main()

{

    Cone* pCone[3];

    Cone conic(66.14, 50.82);

    Cone* iceCreamCone = new Cone(8.74, 6.82);



    pCone[0] = &conic;

    pCone[1] = iceCreamCone;

    pCone[2] = new Cone(48.12, 38.84);



    cout << "Cone's Characteristics\n";

    for (int i = 0; i < 3; i++)

    {

        cout << "\n - Cone No. " << i + 1 << " -";

        cout << "\nRadius:       " << pCone[i]->getRadius();

        cout << "\nHeight:       " << pCone[i]->getHeight();

        cout << "\nBase Area:    " << pCone[i]->CalculateBaseArea();

        cout << "\nTotal Area:   " << pCone[i]->CalculateTotalArea();

        cout << "\nTexture Area: " << pCone[i]->CalculateLateralArea() << endl;

    }



    return 0;

}
