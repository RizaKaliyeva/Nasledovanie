#include "Rectangle.h"

void Rectangle::rotate90()
{
	swap(a, b);
}

double Rectangle::area()
{
	return a*b;
}

istream & operator >> (istream & is, Rectangle & r)
{
	is >> r.x >> r.y >> r.a >> r.b;
	return is;
}

ostream & operator<<(ostream & os, Rectangle r)
{
	os << r.x << "\t" << r.y << "\t" << r.a << "\t" << r.b << endl;
	return os;
}
