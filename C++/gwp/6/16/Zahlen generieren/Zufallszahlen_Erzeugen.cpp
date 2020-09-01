#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
	fstream f;
	f.open("Zahlen.txt", ios::out);
	for(int i=0; i <= 1000; i++)
	{
		float number= (rand()%1000)*0.34;
		cout << number << endl;
		f << number << endl;		
	}
	f.close();
}
