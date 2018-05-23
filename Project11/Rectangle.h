#pragma once
#include "Point.h"
#include"Library.h"

class Rectangle:public Point {
private:
	double a, b;
public:
	Rectangle() = default;
	Rectangle(double x,double y,double a,double b) :Point(x,y),a(a),b(b){}
	void rotate90();
	double area();
	friend istream & operator >> (istream & is, Rectangle & r);
	friend ostream & operator << (ostream & os, Rectangle  r);
};
