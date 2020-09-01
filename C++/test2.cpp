class Polynom{
	public:
		Parameter(float x, int a0, int a1, int a2, int a3, int a4, int a5); // Konstruktor Deklaration
		float Berechnung();
	
	private:
		float x_;
		int koef0_;
		int koef1_;
		int koef2_;
		int koef3_;
		int koef4_;
		int koef5_;	
};

Polynom::Parameter(float x, int a0, int a1, int a2, int a3, int a4, int a5):	// definition des Konstruktors
	x_;
	koef0_(a0);		//Initialisierung von a0
	koef1_(a1);		//Initialisierung von a1
	koef2_(a2);		//Initialisierung von a2
	koef3_(a3);		//Initialisierung von a3
	koef4_(a4);		//Initialisierung von a4
	koef5_(a5);		//Initialisierung von a0
	{}
	
float Polynom::Berechnung(float x, int a0, int a1, int a2, int a3, int a4, int a5){}
