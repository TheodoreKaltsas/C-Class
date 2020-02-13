// Day6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char response = 'y';

	int val1, val2, val3;
	int n = 0;

	while (response == 'y') {
		cout << "\nEnter the first number to be saved: ";
		cin >> val1;
		
		cout << "\nEnter the second number to be saved: ";
		cin >> val2;

		
		cout << "\nEnter the third number to be saved: ";
		cin >> val3;

		double average;
		average = (val1 + val2 + val3) / 3.0;

		cout << "\nThe average is " << average << endl;
		
		cout << "Would you like to restart?" << endl;
		cin >> response;
	}
	 
	system("pause");
	return 0;
}
