#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"

int main() {
	Point **p;
	p = new Point*[3];

	p[0] = new Rectangle(0, 0, 4, 5);
	p[1] = new Circle(1, 1, 5);
	p[2] = new Triangle(3, 4, 1, 1, 1);
	/*Rectangle R(0, 0, 2, 5);
	cout << R.area();
	R.rotate90();
	cout << R;
	p[0] = &R;

	Triangle t(1, 2, 3, 4, 5);
	cout << t.area() << endl;
	t.move(5, 5);
	t.rotate90();
	cout << t << endl;
	p[1] = &t;

	Circle c;
	cin >> c;
	cout << c << endl;
	c.rotate90();
	c.move(0, 8);
	cout << c << endl;
	p[2] = &c;*/

	for (int i = 0; i < 3; i++)
		cout << (*p[i]).area() << endl;

	system("pause");
	return 0;
}