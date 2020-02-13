#include <iostream>

using namespace std;

void greatestCommonDivisor(int x, int y) {
	int remainder = x % y;

	while (remainder != 0) {
		remainder = x % y;
		y = x;
		x = remainder;
	}
	

	cout << "The GCD is " << y << endl;
}

int main()
{
	int a, b;
	cout << "Insert two numbers, the first one being larger than the second, and we will tell you the GCD of those numeros\n";
	cin >> a >> b;

	greatestCommonDivisor(a, b);

	return 0;
}
