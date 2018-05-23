#include "Circle.h"

istream & operator >> (istream & is, Circle & c)
{
	is >> c.x >> c.y >> c.R;
	return is;
}


ostream & operator<<(ostream & os, Circle  c)
{
	os << c.x << "\t" << c.y << "\t" << c.R << endl;
	return os;
}

double Circle::area()
{
	return 3.14*R*R;
}
