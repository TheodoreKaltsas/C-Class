#include <iostream>

using namespace std;

int main()
{
	char response;
	int isPrime;
	int squareRoot;

	do {
		cout << "\nInput any number and we'll tell you if it's prime! STEP RIGHT UP FOLKS!" << endl;
		cin >> isPrime;

		squareRoot = sqrt(isPrime);
		
		if (isPrime == 2) {
			cout << "The number " << isPrime << " is prime" << endl;
		}
		else if (isPrime < 2 || isPrime % 2 == 0) {
			cout << "The number " << isPrime << " is NOT prime" << endl;
		}
		else {
			int div = 3;

			while (div <= sqrt(isPrime)) {
				div += 2;
				if (isPrime % div == 0) {
					cout << isPrime << " is NOT prime\n";
					break;
				}
			}

			


			if (div > sqrt(isPrime)) {

				cout << isPrime << " is prime \n";
			}
		}

		cout << "Would you like to continue? [y/n]: ";
		cin >> response;

	} while (response == 'y');

	cout << "Thanks for playing come again soon!" << endl;

	system("pause");
	return 0;
}
