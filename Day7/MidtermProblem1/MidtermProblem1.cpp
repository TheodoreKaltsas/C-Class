/*
1.	Write a program that accepts two characters and displays the message “The characters are not the same” if the characters are different, and quits if the characters are the same.
2.	Modify the previous program to include a while loop, and make the program continuously ask for two characters as long as the input characters are not the same and stop when they are the same.
*/

#include <iostream>

using namespace std;

int main()
{
	char inputOne, inputTwo;

	cout << "Input two numbers to be compared to each other: ";
	cin >> inputOne >> inputTwo;

	while (inputOne != inputTwo) {
		cout << "The numbers are not the same\n";
		cout << "Input two numbers to be compared to each other: ";
		cin >> inputOne >> inputTwo;
	}

	system("pause");
	return 0;
}
