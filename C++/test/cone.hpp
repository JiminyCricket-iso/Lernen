#ifndef ConeH
#define ConeH

class Cone
{
	private:
		double _rad;
		double _hgt;
	
	public:
		Cone();
		Cone(double radius, double hight);
		Cone(const Cone& c);
		~Cone();
		void setRadius(const double radius) {_rad=radius;}
		void setHeight(const double height) {_hgt=height;}
		double getRadius() const {return _rad;}
		double getHeight() const {return _hgt;}
		double CalculateBaseArea() const;
		double CalculateLateralArea() const;
		double CalculateTotalArea() const;
		double CalculateVolume() const;
};

#endif
