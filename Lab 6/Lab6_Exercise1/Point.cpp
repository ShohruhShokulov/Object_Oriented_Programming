//Point.cpp
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(double a, double b) {
	x = a;
	y = b;
}
void Point::info(void){
	cout << "(x,y) = " << x << ", " << y<<endl;
}
double Point::getx(void) const { return x; }
double Point::gety(void) const { return y; }
void  Point::get(double& a, double& b){
	a = x;
	b = y;

}