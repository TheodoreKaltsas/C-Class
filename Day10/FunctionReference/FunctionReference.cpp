#include <iostream>

using namespace std;

void swap(int& x, int& y) {
	cout << "The original values are a: " << x << " and b: " << y << endl;

	int temp = x;
	x = y;
	y = temp;

	cout << "The new values are a: " << x << " and b: " << y << endl;
}

int main()
{
	int a;
	int b;  

	cout << "Insert two numbers and I will swap their values!" << endl;
	cin >> a;
	cin >> b;

	swap(a, b);

	return 0;
}
