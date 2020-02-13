#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.14159;
	double radius;

	cout << "Today, we will try to find the area and perimeter of a circle based on your inputs for radius!\n\n";
	cout << "What would you like the radius of this circle to be? Radius = ";
	cin >> radius;

	double perimeter = 2 * PI * radius;
	double area = PI * pow(radius, 2);

	cout << "Based on the input of radius = " << radius << ":\n\n";
	cout << "The perimeter of the circle is: " << perimeter << endl;
	cout << "The area of the circle is: " << area << endl;
}