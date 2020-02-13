#include <iostream>

using namespace std;

int main()
{
	double fahrenheit, celcius;
	cout << "Please input a value in fahrenheit to be converted to celcius." << endl;
	cin >> fahrenheit;

	celcius = 5.0 / 9.0*(fahrenheit - 32);
	cout << "The resulting temperature in Celcuis is: " << celcius << endl;
	return 0;
}