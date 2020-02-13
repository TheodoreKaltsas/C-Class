#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	x = 4;
	y = 3;
		
	z = ((4 * x)/3)+2 * y;
	cout << "The value z is equal to: " << z << endl;

	y += 2 * (x) - 4;
	cout << "The value y is equal to: " << y << endl;

	x -= 3;
	cout << "The value x is equal to: " << x << endl;

	z = y % 3;
	cout << "The value z is equal to: " << z << endl;

	return 0;
}