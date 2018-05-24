#pragma once
#include "Library.h"

class Point {
protected:
	double x, y;
public:
	Point() = default;
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
	void move(double x, double y);
	virtual void rotate90(){}
	virtual double area() = 0;
};

