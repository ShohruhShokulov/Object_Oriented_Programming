//Point.h
#pragma once
#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
	double x;
	double y;
public:
	Point() : x(0.0), y(0.0) {}
    Point(double a, double b);
	void info(void);
	double getx(void) const;
	double gety(void) const;
	void get(double&, double&);
};

#endif // POINT_H
