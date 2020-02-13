#include <iostream>

using namespace std;

int main()
{
	double principleAmount = 24.0;
	double interest = 0.05;
	int startingYear = 1626;

	cout << "Year\t" << "|\t" << "Cost\n";
	cout << startingYear << "\t" << "|\t" << principleAmount << "\n";


	for (int i = 1; i <= 400; i++) {
		startingYear++;

		principleAmount *= (1 + interest);


		if (i % 50 == 0) {
			cout << startingYear << "\t" << "|\t" << principleAmount << "\n";
		}
	}

	system("pause");
	return 0;
}
