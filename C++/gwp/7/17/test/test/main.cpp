#include <iostream>
#include "Source.h"


using namespace std;

int main()
{
	CongruenzGenerator instanz(4, 0, 200, 1, 20);
	//cout << instanz.getArray(1) << endl;


	for (int i = 0; i < 20; i++)
	{
		cout << i << ": " << instanz.getArray(i)<< endl;
	}

}

