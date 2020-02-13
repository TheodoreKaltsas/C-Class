/*
Most of the time, when you write a program, you will have to get
data from the user or outside and you will have to save
it. Different data requires difference space (size); depending
on the type of the data. The data type indocates to the compiler
how much space it needs and how is it going to be saved(format)
-Integer type: int allows you to save whole number no decimal
 The maximum value 2,147,483,647 and the minimum -2,147,483,648
 We use 4 bytes (a byte is 8 bits)
 -The char data type (characters)  holds one byte: used to store
 one charcater 'A' 'b' '1' '9'. we always write characters between
 single quotes
 -bool data type has two values true and false
 - long is a bigger integer (8 bytes)
 - float (use 4 bytes to store single precision numbers) decimal numbers
 - double more precise (bigger) float
 - short whole number using 2 bytes

 - to save these data, we need storage places, and to refer to
 these storage places we name them. They are called variables
 A variable is a storage place that has a type and a name.
 The name of a variable can be anything as long as:
 1- should not start with a digit
 2- should not be one of the resereved words (main, include, int, long, double, while ...
 3- should not contain a special character `~!@#$%^&*()-+={}[]\|/?><":;.,
 The most annoying special character is: space.

 */

#include <iostream>

using namespace std;

int main()
{
	//declare a variable to contain the number of students in the class
	int numberOfStudents;
	double totalMoney;
	char studentLetter;
	short numberOfCountries;
	
	numberOfStudents = 30;
	studentLetter = 'A';
	totalMoney = 27.25;

	cout << "The size of numberOfStudents is: " << sizeof(numberOfStudents) << endl;
	cout << "The value of numberOfStudents is: " << numberOfStudents << endl;
	cout << "The address of numberOfStudents is " << (&numberOfStudents) << endl;

	cout << "The size of totalMoney is: " << sizeof(totalMoney) << endl;
	cout << "The value of totalMoney is: " << totalMoney << endl;
	cout << "The address of totalMoney is " << (&totalMoney) << endl;

	cout << "The size of studentLetter is " << sizeof(studentLetter) << endl;
	cout << "The address of studentLetter is " << hex << (int)studentLetter << endl;
	cout << "The address of numberOfCountries is " << (&numberOfCountries) << endl;
	return 0;
}