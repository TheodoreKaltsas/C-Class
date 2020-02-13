//Double slashes allow us to create comments that are ignored by the compiler
#include <iostream>
//Include gets the code from outside (libraries)
//Needed to perform in this case, display on the screen
//iostream allows you to use cout

using namespace std;
//Tells us that the names we will be using are standard

//Every program in every language has a starting point 
//that starting point we call it main. The first instruction to be executed
//is the first instruction in main. In our case it is: cout << ...
int main()
{
	//Every block of code in C++ starts with an open brace
	//and closes with closed brace
	cout << "Hello World\n";
	//cout it command that allows you to display things
	//on the screen. A text to be displayed on the screen has to be
	//between double quote "" we call it string
	// \n signifies that anything you display with be displayed on the next line
	
	return 0; //the program finished as expected.
}