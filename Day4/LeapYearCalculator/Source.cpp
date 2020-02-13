/*Write a program that accepts a year and decides if the year is
a leap year or not.
A year is leap if it is divisible by 400 or divisible
by 4 but not by 100.
e. 1600 is leap, 1800 is not leap, 2020 is leap.
*/

#include <iostream>

using namespace std;

int main()
{

	int leapYear;
	cout << "Input any year and we'll tell you if it's a leap year or not!: " << endl;
	cin >> leapYear;

	if ((leapYear % 4 == 0 && leapYear % 100 != 0) || (leapYear % 400) == 0) {
		cout << "That is a leap year! Congratulations smarty!" << endl;
	}
	else {
		cout << "Try again nerd!" << endl;
	}
	
	return 0;
}