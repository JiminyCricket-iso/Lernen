#include <iostream>
using namespace std;




void swap_ref(int &a, int &b)
{
	int temp;		//temp = hilfsvariable
	temp = a;	
	a = b;
	b = temp;
}	

void swap_prt(int *c, int *d)
{
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;

	
	
	}

int main(void)
{

	cout << "Für Referenzen:" << endl;
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "a=" << a << " b=" << b << endl;
	cout << "swap_ref(a,b)" << endl;
	swap_ref(a,b); 
	cout << "a=" << a << "b=" << b<< endl;


	cout << "Für Zeiger:" << endl;
	
	int c, d;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "c=" << c << " d=" << d << endl; 
	cout << "&c=" << &c << " &d="<< &d << endl;
	cout << "swap_prt(&c,&d)" << endl;
	swap_prt(&c, &d);
	cout << "c=" << c << " d="<< d << endl;
	cout << "&c=" << &c << " &d="<< &d << endl;
	
	
	
	
	return 0;
}
