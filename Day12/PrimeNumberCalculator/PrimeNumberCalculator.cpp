#include <iostream>

using namespace std;

bool primeNumbers(int isPrime) {

	int squareRoot;
	squareRoot = sqrt(isPrime);
	bool prime = false;

	if (isPrime == 2) {
		cout << "The number " << isPrime << " is prime" << endl;
		prime = true;
	}
	else if (isPrime < 2 || isPrime % 2 == 0) {
		cout << "The number " << isPrime << " is NOT prime" << endl;
		prime = false;
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
			prime = true;
		}
	}

	return prime;
}


int numOfPrimes(int A[], int s) {
	int count = 0;
	for(int i = 0; i < s; i++) {
		if (primeNumbers(A[i])) {
			count++;
		}
	}

	return count;
}

int main()
{
	const int SIZE = 8;
	int maxInputs = SIZE;
	int num;
	char response;

	int numberOfPrimes[SIZE];
	int count;

	//cout << "Input a number and I will tell you if it's false or not!\n";
	cout << "Input an array of numbers and I will tell you if there are primes or not\n";

	for (int i = 0; i < SIZE; i++) {
		cout << "Value at index " << i << ": ";
		cin >> numberOfPrimes[i];
	}

    count = numOfPrimes(numberOfPrimes, SIZE);
	cout << "The number of primes in the array are " << count << endl;
	
	
	return 0;
}
