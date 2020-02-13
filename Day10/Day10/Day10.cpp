#include <iostream>

using namespace std;

int mirror(int n) {
	int remainder = 0;
	int d;
	while (n != 0) {
		d = n % 10;
		remainder = remainder * 10 + d;
		n /= 10;
	}

	return remainder;
}

int main()
{
	int n;
	cout << "Input a number and I will mirror it for you!" << endl;
	cout << "Number = ";
	cin >> n;

	cout << "The mirror of " << n << " is " << mirror(n) << endl;

	return 0;
}

