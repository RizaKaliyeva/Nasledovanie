#pragma once
#include"Point.h"

class Triangle: public Point{
private:
	double a, b, c;

public:
	Triangle() = default;
	Triangle(double x, double y, double a, double b, double c);
	void rotate90();
	double area();
	friend istream & operator >> (istream & is, Triangle & t);
	friend ostream & operator << (ostream & os, Triangle  t);


};