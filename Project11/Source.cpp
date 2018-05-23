#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"

int main() {
	Rectangle R(0, 0, 2, 5);
	cout << R.area();
	R.rotate90();
	cout << R;

	Circle c;
	cin >> c;
	cout << c << endl;
	c.rotate90();
	c.move(0, 8);
	cout << c << endl;

	system("pause");
	return 0;
}