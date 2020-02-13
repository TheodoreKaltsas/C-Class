// PowerFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


double powerFunction(double a, int b) {
	double value = 1;

	for (int i = 1; i <= b; i++) {
		value *= a;
	}

	 return value;
}

int main()
{
	char response = 'y';

	do {
		double a;
		int b;
		cout << "\nEnter two values that you would like to use as the base and the exponent to compute\n";
		cin >> a >> b;

		double val = powerFunction(a, b);

		cout << "The value of " << a << " to the power of " << b << " is " << val << endl;
		cout << "\nWould you like to continue? [y/n]: ";
		cin >> response;

	} while (response == 'y');


	cout << "\nThank you have a terrible day!" << endl;
	return 0;
}
