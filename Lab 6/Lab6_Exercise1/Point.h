//Point.h
#pragma once
#ifndef __POINT_H__
#define __POINT_H__

class Point {
private:
	double x;
	double y;
public:
	Point(double a, double b);
	void info(void);
	double getx(void) const;
	double gety(void) const;
	void get(double&, double&);
 };

#endif // __POINT_H__