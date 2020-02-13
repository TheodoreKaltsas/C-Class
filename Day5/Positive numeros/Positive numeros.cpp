#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int n = 0;
	
	cout << "Enter any number, but if it's negative the program will stop!" << endl;
	cin >> n;
	int smallest = n;

	while (n >= 0)
	{
		if (n < smallest) {
			smallest = n;
		}

		cout << "Enter any number, but if it's negative the program will stop!" << endl;
		cin >> n;
		
		cout << "The number you inputted is: " << n << ". Please continue writing numbers!" << endl;

		sum += n;
	}

	sum -= n;

	cout << "Come back next year sir!" << endl;
	cout << "The sum of these numbers is " << sum << endl;
	cout << "The smallest number is " << smallest << endl;

	return 0;
}
