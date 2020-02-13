#include <iostream>

using namespace std;

int pairs(int A[], int s, int d)
{
	int pair = 0;
	
	for (int i = 0; i <= s - 1; i++) {
		if (A[i] == d && A[i+1] == d) {
			pair++;
			i++;
		}
	}

	return pair;
}

int main()
{
	int d = 2;
	const int SIZE = 10;
	int A[] = { 1,2,2,2,3,4,2,2,4,2 };
	
	cout << "The values of the array are as follows: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "A[" << i << "] = " << A[i] << endl;
	}

	cout << endl;

	int pairings = pairs(A, SIZE, d);
	cout << "The number of pairs for the number " << d << " are " << pairings << endl;

	return 0;
}
