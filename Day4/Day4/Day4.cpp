#include <iostream>

using namespace std;

int main()
{
	int value1, value2;
	int sum, difference, product, remainder;
	double quotient;
	char operation;

	cout << "You will input two numbers followed bt the sign '+', '-', '*', '/' or '%' to perform an operation on them\n";
	cout << "First let us input an operation to be performed on two numbers: ";
	cin >> operation;

	switch (operation) {
		case '+':
			cout << "\n\nYou chose addition so input the value of two numbers to be added." << endl;
			cin >> value1;
			cout << endl;
			cin >> value2;
			cout << endl;

			sum = value1 + value2;
			cout << "The sum of " << value1 << " + " << value2 << " = " << sum << endl;
			break;
		case '-':
			cout << "\n\nYou chose subtratction so input the value of two numbers to be subtracted." << endl;
			cout << "(The first number you input will be subtracted by the second):" << endl;

			cin >> value2;
			cout << endl;
			cin >> value1;
			cout << endl;

		    difference = value2 - value1;
			cout << "The difference of " << value2 << " - " << value1 << " = " << difference << endl;
			break;
		case '*':
			cout << "\n\nYou chose multiplication so input the value of two numbers to be multiplied." << endl;

			cin >> value1;
			cout << endl;
			cin >> value2;
			cout << endl;

			product = value1 * value2;
			cout << "The product of " << value1 << " * " << value2 << " = " << product << endl;
			break;
		case '/':
			cout << "\n\nYou chose division so input the value of two numbers to be divided." << endl;
			cout << "(The first number you input will be divided by the second):" << endl;

			cin >> value2;
			cout << endl;
			cin >> value1;
			cout << endl;

			quotient = (double)value2 / value1;
			cout << "The quotient of " << value2 << " / " << value1 << " = " << quotient << endl;
		case '%':
			cout << "\n\nYou chose to divide and find the remainder so input the value of two numbers to be divided for their remainder." << endl;
			cout << "(The first number you input will be divided by the secondto find it):" << endl;

			cin >> value2;
			cout << endl;
			cin >> value1;
			cout << endl;

			remainder = value2 % value1;
			cout << "The remainder of " << value2 << " / " << value1 << " = " << remainder << endl;
			break;
		default:
			cout << "That is not a valid operation... TRY AGAIN!" << endl;
			break;
	}
	
	return 0;
}

