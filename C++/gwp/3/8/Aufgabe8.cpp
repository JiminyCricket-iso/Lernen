#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int x)
{
	int i=2;
	while(i<=sqrt(x))
	{
		if(x%i==0) return false;
		else 
		{
			i++;
			continue;
		}	
	}
	return true;
}

int nPrime(int n)
{
	int zahl=2;
	int counter = 1;
	while(counter <= n)
	{
		if(IsPrime(zahl) == false) zahl++; 		//ist keine Primzahl

		else                    				//ist eine Primzahl
		{
			if(counter < n)
			{
				zahl++;
				counter++;
			}
			else counter ++;
		}

	}
	return zahl;
}



int main(void)
{
	int n;
	cout << "welche Primzahl soll berechnet werden? ";
	cin >> n; 
	cout <<"Die "<< n << "te Primzahl lautet: " << nPrime(n)<< endl;
}
