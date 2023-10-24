//Rectangle.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;
bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
	// Determine left-top and right-bottom corners automatically
	int leftX = min(ul.GetX(), lr.GetX());
	int leftY = min(ul.GetY(), lr.GetY());
	int rightX = max(ul.GetX(), lr.GetX());
	int rightY = max(ul.GetY(), lr.GetY());

	// Create left-top and right-bottom points
	Point leftTop;
	Point rightBottom;

	// Initialize the left-top and right-bottom points
	if (!leftTop.InitMembers(leftX, leftY) || !rightBottom.InitMembers(rightX, rightY)) {
		return false; // Initialization failed
	}

	// Update the class members
	m_upLeft = leftTop;
	m_lowRight = rightBottom;

	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "LeftTop: " << '[' << m_upLeft.GetX() << ", ";
	cout << m_upLeft.GetY() << ']' << endl;
	cout << "RightBottom: " << '[' << m_lowRight.GetX() << ", ";
	cout << m_lowRight.GetY() << ']' << endl << endl;
}

bool Rectangle::IsInside(const Point& p) const {
	int x = p.GetX();
	int y = p.GetY();

	// Check if the point is inside the rectangle
	if (x >= m_upLeft.GetX() && x <= m_lowRight.GetX() &&
		y >= m_upLeft.GetY() && y <= m_lowRight.GetY()) {
		return true;
	}

	return false;
}