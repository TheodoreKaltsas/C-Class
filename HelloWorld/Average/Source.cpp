
#include <iostream>

using namespace std;

int main()
{
	int firstValue, secondValue, thirdValue;

	firstValue = 60;
	secondValue = 1920;
	thirdValue = 98287;

	int totalValue = firstValue + secondValue + thirdValue;
	int n = 3;

	int average = totalValue / n;

	cout << "The value of the first integer is: " << firstValue << endl;
	cout << "The value of the second integer is: " << secondValue << endl;
	cout << "The value of the third integer is: " << thirdValue << endl;
	cout << "The average of the these three numbers is: " << average << endl;
}

/*
int main()
{
	int values[10] = {};
	int inputOfValues;
	int total = 0;

	for (int i = 0; i < 10; i++)
	{
		int value;
		cout << "Input a number to the array: " << endl;
		cin >> value;

		values[i] = value;
	}

	for(int j = 0; j < 10; j++)
	{
		
		values[j] += total;

	}

	cout << "Total: " << total << endl;
}
*/
