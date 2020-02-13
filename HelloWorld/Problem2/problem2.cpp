#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.14159265;
	double initialVelocity;
	double theta;
	double maxHeight;

	cout << "Input values for the Initial velocity and the theta to determine the maximum height a projectile will travel.\n\n";
	
	cout << "Input a value for theta (in radians to be converted to degrees): ";
	cin >> theta;
	cout << "\nInput a value for the initial velocity (in meters per second): ";
	cin >> initialVelocity;

	double numerator = (0.5 * pow(initialVelocity, 2) * pow(sin(theta * (180 / PI)), 2));
	maxHeight = (numerator) / 9.8;

	cout << "The maximum height of the projectile is: " << maxHeight << " meters" << endl;

	return 0;
}