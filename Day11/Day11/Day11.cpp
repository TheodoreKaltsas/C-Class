#include <iostream>

using namespace std;

int diff(int& a, int b) {

	int result = a++;
	result = result - b;

	return result;

}

int calc(int& a, int b, char c) {

	int result;
	
	if (c == 'a') {

	result = diff(a, -b);
	}
	else if (c == 's') {

		result = diff(a, b);
	}
	else {

		result = 0;
	}

	if (result < 0) {

		result = -result;

	}

	return result;

}


void main() {

	int x, y, z;
	x = 2;
	y = 4;

	z = diff(y, 0);
	cout << "x = " << x << " y = " << y << " z = " << z << endl;

	{

		int y = calc(z, x, 's');

		cout << "x = " << x << " y = " << y << " z = " << z << endl;

	}

	cout << "x = " << x << " y = " << y << " z = " << z << endl;

	y = calc(z, -x, 'a');
	cout << "x = " << x << " y = " << y << " z = " << z << endl;

	z = calc(x, -y, 's');
	cout << "x = " << x << " y = " << y << " z = " << z << endl;

}