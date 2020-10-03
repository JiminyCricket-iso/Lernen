//https://www.youtube.com/watch?v=RJPYy665fwg
#include <iostream>

using namespace std;

class KongruenzGenerator
{
private:
	int kapazitaet;
	int NumberOfElement;
	int* Array;

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
		kapazitaet = 10;
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

	int getNumberOfElements()
	{
		return NumberOfElement;
	}
};

int main()
{
	KongruenzGenerator instanz;
	instanz.add(10);
	instanz.add(40);
	instanz.add(34);
	instanz.add(65);
	instanz.add(10);
	instanz.add(40);
	instanz.add(34);
	instanz.add(65);
	instanz.add(10);
	instanz.add(40);
	instanz.add(34);
	instanz.add(65);
	
	for (int i = 0; i < instanz.getNumberOfElements(); i++)
	{
		cout << i << ": " << instanz.getAdd(i) << endl;
	}
	

	//system("PAUSE");

	return 0;
}