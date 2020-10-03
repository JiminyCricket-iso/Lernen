#include <iostream>
#include <stdio.h>

using namespace std;

class KongruenzGenerator
{
	int Array[20];

private:
	int a;
	int c;
	int m;
	int x0;
	

public:
	KongruenzGenerator(int a, int c, int m, int x0);
	int Calculation();
};

KongruenzGenerator::KongruenzGenerator(int a, int c, int m, int x0)
{
	 this -> a = a, this -> c = c, this -> m = m, this -> x0 = x0;
}

int KongruenzGenerator::Calculation()
{
	for (int i = 0; i < sizeof(Array) / sizeof(int); i++)
	{
		if (i == 0)
		{
			Array[i] = x0;
			cout << Array[i] << endl;
		}
		else
		{
			Array[i]= (a * Array[i - 1] + c) % m;
			cout << Array[i] << endl;
		}
	}
	return 0;
}


int main()
{
	KongruenzGenerator instanz(4,0,200,1); 
	instanz.Calculation();
}
