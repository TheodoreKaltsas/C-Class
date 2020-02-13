#include <iostream>

using namespace std;

int main()
{
	double firstValue, secondValue, thirdValue;

	cout << "Enter the first number: ";
	cin >> firstValue;

	cout << "Enter the second number: ";
	cin >> secondValue;

	cout << "Enter the third number: ";
	cin >> thirdValue;

	double totalValue = firstValue + secondValue + thirdValue;
	double n = 3.0;

	double average = totalValue / n;

	cout << "The value of the first integer is: " << firstValue << endl;
	cout << "The value of the second integer is: " << secondValue << endl;
	cout << "The value of the thirds integer is: " << thirdValue << endl;
	cout << "The average of the these three numbers is: " << average << endl;
}
