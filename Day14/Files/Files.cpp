#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string fileName = "C:\\Users\nycbr\Desktop\Ted\Day14\Files\output.txt";
	ofstream outFile;
	outFile.open(fileName);

	if (!outFile.is_open()) {
		cout << "Cannot open file " << fileName << endl;
		exit(1);
	}

	//now we can write to the file, just use the file as 
	//if it was cout
	outFile << "This is the first line \n";
	outFile << "This is the second line \n";
	outFile << "This is the last line \n";
	//don't forget to close the file 
	outFile.close();
	//for an input file we do the same 
	//let's open test.txt file and read the data from it
	//you need ifstream for input file

	ifstream inFile;
	string inputFile = "C:\\Users\nycbr\Desktop\Ted\Day14\Files\VeryNice.txt";

	inFile.open(inputFile);
	//check if open 
	if (!inFile.is_open()) {
		cout << "Cannot open file " << inputFile << endl;
	}
	//to read a line from a file or from cin we use getline
	string myLine;
	getline(inFile, myLine);
	cout << "the line is: " << myLine << endl;
	//read an integer 
	int num;
	inFile >> num;
	cout << "Num = " << num << endl;
	double d;
	inFile >> d;
	cout << "d = " << d << endl;
	string word;
	inFile >> word;
	cout << "word = " << word << endl;
	inFile.close();
	return 0;
	

}
