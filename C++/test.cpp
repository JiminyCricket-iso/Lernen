// Programm zur Demonstration eines Kopierkonstruktors
#include <iostream>
using namespace std;



class tKlasse
{
	public:
		tKlasse()
		{
			Zeiger = new int;
			*Zeiger = 5;
		}
		
		~tKlasse()
		{
			delete Zeiger;
			Zeiger = 0;
		}
		
		void SetData(int a) {*Zeiger = a;}
		int GetData() const {return *Zeiger;}
		
		tKlasse(const tKlasse& k)
		{
			cout << "Kopierkonstruktor" << endl;
			Zeiger = new int;
			*Zeiger=k.GetData();
			sonstiges=k.sonstiges;
		}
		
		int sonstiges;
	
	private:
		int *Zeiger;
};

void Funktion(tKlasse para)
{
	cout << "Funktion:" << para.GetData() << endl;
}

int main()
{
	tKlasse Objekt;
	cout << Objekt.GetData() << endl;
	Objekt.SetData(7);
	cout << Objekt.GetData() << endl;
	Funktion(Objekt);
	cout << Objekt.GetData() << endl;
}
