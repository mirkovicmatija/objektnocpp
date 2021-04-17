#include <iostream>
#include <cmath>

class cTacka
{
	double dX, dY;
	public:
	cTacka(double a, double b) { dX = a; dY = b;}
	~cTacka(){}
	double getdX(){return dX;}
	double getdY(){return dY;}
	double point(){return pow(dX,2) + pow(dY,2);}
};


int main() {
    
	cTacka T(2,3);
	cTacka K(4,5);
	double x = T.point() - K.point();
	std::cout<<x<<std::endl;
	return 0;
}
