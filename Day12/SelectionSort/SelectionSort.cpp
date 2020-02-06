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

}

int main()
{
	int index;
	const int SIZE = 10;
	int array[SIZE] = { 9, 4, -10, 1, -4, -9, 8, -3, 12, 3 };

	cout << "Give me an index to count from up to the end of the array and I will tell you the smallest number.\n";
	cout << "Start from index ";
	cin >> index;

	cout << "The array is as follows: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Array[" << i << "] = " << array[i] << endl;
	}

	int smallest = smallestNumIndex(array, SIZE, index);
	cout << "The index of the smallest number starting from index " << index << " is " << smallest << endl;

	system("pause");
	return 0;
}
