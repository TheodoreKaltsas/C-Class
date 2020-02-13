/*Design a program that imitates text editor.
It creates an output file, the name of the file and path should
be given by the user.
then the user types in text line by line. to end the typing
the user types in . on an empty line.
The text text should be saved in the file.

Example:
Enter the file name: C:\\thisDir\\myWork\\test.txt
Enter your text, end it with . on an empty line:
This is my first line of my wonderfuk text,
Don't now what to write next
That's it.
.
Your text is saved in C:\\thisDir\\myWork\\test.txt
Use get getline to read an entire line.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string filePath;
	ofstream outFile;

	cout << "Welcome to Ted's fantastic Text editor!" << endl;
	cout << "Insert the path you'd like to create your file in (i.e.: C:\\thisDir\\myWork\\test.txt): ";
	getline(cin, filePath);

	outFile.open(filePath);
	if (!outFile.is_open()) {
		cout << "The file in question could not be created." << endl;
		exit(1);
	}

	cout << "Type what you want to text then end it with . and an empty line." << endl;
	string line;

	while (line != ".") {
		getline(cin, line);
		outFile << line << endl;
	}

	outFile.close();
	return 0;
}
