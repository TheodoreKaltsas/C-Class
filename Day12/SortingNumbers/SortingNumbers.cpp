#include <iostream>

using namespace std;

int smallestNum(int A[], int s, int index) {
	int currentNumber, smallestNumber;
	
	smallestNumber = A[index];

	for (int i = index; i < s; i++) {
		currentNumber = A[i];

		if (currentNumber < smallestNumber) {
			smallestNumber = currentNumber;
		}

	}

	return smallestNumber;
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

	int smallest = smallestNum(array, SIZE, index);
	cout << "The smallest number starting from index " << index << " is " << smallest << endl;

	system("pause");
	return 0;
} 
