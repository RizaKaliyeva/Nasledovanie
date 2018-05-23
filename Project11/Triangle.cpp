#include "Triangle.h"

Triangle::Triangle(double x, double y, double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::rotate90()
{
	swap(a, b);
	swap(b, c);
	swap(a, c);
}

double Triangle::area()
{
	double P = (a + b + c) / 2;
	double s = sqrt(P*(P - a)*(P - b)*(P - c));
	return s;
}

istream & operator >> (istream & is, Triangle & t)
{
	is >> t.x >> t.y >> t.a >> t.b >> t.c;
	return is;
}

ostream & operator<<(ostream & os, Triangle t)
{
	os << t.x << "\t" << t.y << "\t" << t.a << "\t" << t.b << "\t" << t.c << endl;
	return os;
}
