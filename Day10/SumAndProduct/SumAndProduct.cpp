// SumAndProduct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void sumProduct(int x, int y, int& sum, int& prod) {
	sum = x + y;
	prod = x * y;
}

int main()
{
	int a, b, sum, product;
	cout << "Input two numbers and we will return their sum and product!" << endl;
	cin >> a;
	cin >> b;

	sumProduct(a, b, sum, product);
	cout << "The product is " << product << " and the sum is " << sum << endl;
	return 0;
}
