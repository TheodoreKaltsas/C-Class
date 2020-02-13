/*Open notepad
Write the following lines into the file
Saterday   23    2.3
Monday    15     4.3
Friday   20      2.1

save the file on the desktop under run.txt
Write a C++ program that will open the file
read the three lines so that it tells on which day
you run the most miles and what is the average
time for all runs
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string dayOne, dayTwo, dayThree, largestDay;
	int distanceOne, distanceTwo, distanceThree, largestDistance;
	double timeOne, timeTwo, timeThree;

	string filename = "C:\\Users\\nycbr\\Desktop\\run.txt";
	ifstream inFile;
	inFile.open(filename);
	
	if (!inFile.is_open()) {
		cout << "Cannot open file " << filename << endl;
		exit(1);
	}

	/*
	inFile >> dayOne >> distanceOne >> timeOne;

	largestDistance = distanceOne;
	largestDay = dayOne;

	inFile >> dayTwo >> distanceTwo >> timeTwo;
	if (distanceTwo > largestDistance) {
		largestDistance = distanceTwo;
		largestDay = dayTwo;
	}

	inFile >> dayThree >> distanceThree >> timeThree;
	if (distanceThree > largestDistance) {
		largestDistance = distanceThree;
		largestDay = dayThree;
	}

	double averageTime = (timeOne + timeTwo + timeThree) / 3;
	cout << "Largest distance traveled is " << largestDistance << " on " << largestDay << endl;
	cout << "The average time spent running was " << averageTime << endl;
	*/

//------------------------------------SECOND PART OF PROGRAM---------------------------------------------------
	
	double average = 0, time;
	string day;
	int distance;
	int i = 1;
	int n = 0;

	while (!inFile.eof()) {
		cout << endl;
		inFile >> day >> distance >> time;

		if (i == 1) {
			largestDistance = distance;
			largestDay = day;
		}

		if (distance >= largestDistance) {
			largestDistance = distance;
			largestDay = day;
		}

		average += time;
		i++;
		n++;
		cout << day << endl;
		cout << distance << endl;
		cout << time << endl;
	}

	cout << "The average time spent is " << average/n << endl;
	cout << "\nThe largest distance traveled is " << largestDistance << " on " << largestDay << endl;

	inFile.close();
	return 0;
}
