//Circle.CPP
#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle():centre(Point()),radius(0.0){}
Circle::Circle(Point& c, double r): centre(c),radius(r){}
Circle::Circle(double x, double y, double r): centre(x,y),radius(r){}
void Circle::info() const {
	cout << "Center: [" << centre.getx() << "," << centre.gety() << "], Radius: " << radius << endl;
}
Circle::~Circle() {
	cout << "Destruction of a class instance" << endl;
	info();
}