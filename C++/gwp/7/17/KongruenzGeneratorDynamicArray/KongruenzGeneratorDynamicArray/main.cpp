#include <iostream>
#include "Source.h"

using namespace std;

int main()
{
	CongruenzGenerator instanz(4, 0, 200, 1, 20);
	instanz.getArray(1);
}
/*
	for (int i = 0; i < 20; i++)
	{
		cout << i << ": " << instanz.getArray(i)<< endl;
	}

}
*/
