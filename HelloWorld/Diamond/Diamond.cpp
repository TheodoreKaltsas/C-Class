/*
Write a program that will display the following shape
				*
			*		*
		  *			  *
			*		*
				*
*/

#include <iostream>

using namespace std;

int main()
{
	//My solution by not a very readable solution
	cout << "\t\t * \n";
	cout << "\t *" << "\t\t *\n";
	cout << "*" << "\t\t\t\t\ * \n";
	cout << "\t *" << "\t\t *\n";
	cout << "\t\t * \n\n";

	//More readable version of the code above
	cout << "		*\n";
	cout << "	*		*\n";
	cout << "*				*\n";
	cout << "	*		*\n";
	cout << "		*\n";
}
