//Circle.h
#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h" // Include the Point class header
class Circle {
private:
	Point centre;
	double radius;
public:
	Circle();
	Circle(Point& c, double r);
	Circle(double x, double y, double r);
	~Circle();
	void info(void) const;

};
#endif

