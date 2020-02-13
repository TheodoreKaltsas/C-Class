// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
	double s;

	cout << "Input a number to find the square root of that is positive! " << endl;
	cin >> s;

	double initialX = s / 2;
	double initialE;
	

	initialE = (s - pow(initialX, 2)) / (2* initialX);


	while (abs(initialE) > 0.00001) {
		initialX = (s + pow(initialX, 2)) / (2 * initialX);
		initialE = (s - pow(initialX, 2)) / (2 * initialX + initialE);
	}

	cout << "The value of x is " << initialX << endl;

	system("pause");
	return 0;
}




