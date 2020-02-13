#include <iostream>

using namespace std;

int main()
{
	int evenNumberCounter = 0;
	int p;

	cout << "Input numbers that are positive but beware of negative numbers! (Spooky):\n";

	do {
		cin >> p;
		cout << "The number you inputted was " << p << endl;

		if (p % 2 == 0 && p > 0) {
			evenNumberCounter++;
		}

	} while (p >= 0);

	cout << "\n\nYou done goofed off and put a negative\n";
	cout << "However, the amount of even numbers you inputted was " << evenNumberCounter << endl;


	return 0;

}

