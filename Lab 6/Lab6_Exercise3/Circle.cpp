//Circle.CPP
#include <iostream>
#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
# define M_PI    3.14159265358979323846
using namespace std;

Circle::Circle() :centre(Point()), radius(0.0) {}
Circle::Circle(Point& c, double r) : centre(c), radius(r) {}
Circle::Circle(double x, double y, double r) : centre(x, y), radius(r) {}
void Circle::info() const {
	cout << "Center: [" << centre.getx() << "," << centre.gety() << "], Radius: " << radius << endl;
}
Circle::~Circle() {
	cout << "Destruction of a class instance" << endl;
	info();
}
double Circle::area(void) {
	double area; //variable for area
	area = M_PI * radius * radius;
	return area;
}
Point Circle::center(void) {
	return centre;
}
double Circle::radus(void) {
	return radius;
}
bool Circle::IsInside(const Point& a) {
	double dist = pow(a.getx() - centre.getx(), 2) + pow(a.gety() - centre.gety(), 2);
	if (dist <= radius*radius)
		return true;
	else if (dist > radius*radius)
		return false;
}