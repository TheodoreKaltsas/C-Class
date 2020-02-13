#include <iostream>

using namespace std;

int smallestNumIndex(int A[], int s, int index) {
	int indSmall = index;
	

	for (int i = index; i < s; i++) {

		if (A[i] < A[indSmall]) {
			indSmall = i;
		}
	}

	return indSmall;
}


void selectionSort(int A[], int s) {
	for (int i = 0; i < s - 1; i++) {
		int indS = smallestNumIndex(A, s, i);

		int temp = A[i];
		A[i] = A[indS];
		A[indS] = temp;
	}
}

int main()
{
	int index;
	const int SIZE = 10;
	int array[SIZE];

	cout << "Input 10 numbers for your array that are not in order" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Array[" << i << "] = ";
		cin >> array[i];
	}

	cout << endl;
	selectionSort(array, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << "Array[" << i << "] = " << array[i] << endl;
	}


	system("pause");
	return 0;
}
