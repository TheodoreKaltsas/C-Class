#include <iostream>

using namespace std;

int main()
{

	char response;

	do {
		double a, b, c;
		double discriminant;
		cout << "For a quadratic function, input the values for a, b and c in order:\n";
		cin >> a;
		cout << endl;
		cin >> b;
		cout << endl;
		cin >> c;
		cout << endl;

		discriminant = (pow(b, 2)) - (4 * a * c);

		if (discriminant > 0)
		{
			cout << "This type of quadratic formula has a discriminant of " << discriminant << " meaning it has two real soltuions." << endl;

			double s1;
			double s2;

			s1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2.0 * a);
			s2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2.0 * a);

			cout << "The first solution of this quadratic is: " << s1 << endl;
			cout << "The second solution of this quadratic is: " << s2 << endl;
		}
		else if (discriminant == 0) {

			cout << "This type of quadratic formula has a discriminant of " << discriminant << " meaning it has one double soltuions." << endl;

			double solution;

			solution = -b / (2.0 * a);

			cout << "The solution of this quadratic is: " << solution << endl;
		}
		else {
			cout << "There are no real solutions";
		}

		cout << "\n\nWould you like to solve another quadratic equation? (Answer [y/n]): ";
		cin >> response;

	} while (response == 'y');

	cout << "\nThank you come again!" << endl;


	return 0;
}