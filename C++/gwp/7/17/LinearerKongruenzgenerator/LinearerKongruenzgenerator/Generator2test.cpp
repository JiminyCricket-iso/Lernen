#include <iostream>

using namespace std;

class KongruenzGenerator
{
private:
	int kapazitaet;
	int NumberOfElement;
	int *Array;

	void initialize(int from)
	{
		for (int i = from; i < kapazitaet; i++)
		{
			Array[i] = 0;
		}
	}
	 
	void expand()
	{
		kapazitaet *= 2;
		int* tempArray = new int[kapazitaet];

		for (int i = 0; i < NumberOfElement; i++)
		{
			tempArray[i] = Array[i];
		}
		
		delete[] Array;
		Array = tempArray;
		initialize(NumberOfElement);
	}

	

public:
	KongruenzGenerator()
	{
		kapazitaet = 0;
		NumberOfElement = 0;
		Array = new int[kapazitaet];
	}

	~KongruenzGenerator()
	{
		delete[]Array;
	}

	void add(int el)
	{
		if (NumberOfElement >= kapazitaet)
			expand();
		Array[NumberOfElement++] = el;
	}

	int getAdd(int index)
	{
		if (index < 0 || index >= NumberOfElement)
			throw("Ausnahme: Außerhalb der Grenzen");

		return Array[index];
	}

	void popBack()		//pop the last element
	{
		if (NumberOfElement > 0)
			Array[--NumberOfElement] = 0;	// Nicht nötig
		else
			throw("Array empty"); 
	}
};

int main()
{
	KongruenzGenerator instanz;
	instanz.add(10);

	cout << instanz.getAdd(0) << endl;

	system("PAUSE");

	return 0;
}