/*
#include <iostream>

using namespace std;

int main()
{
	int number = 5;
	while (number % 4 != 3 || number % 3 != 2) {
		number += 5;
	}

	cout << "The number of students is " << number << endl;

	return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	int i = 1;
	char stars = '*';
	cout << "How many lines would you like to add to your pyrimad?\n";
	cin >> n;
	cout << endl;


	while (i <= n) {
		int j = 1;
		while (j <= i) {
			j++;
			cout << stars;
		}

		i++;
		cout << endl;
	}

	//----------------------------------------------------------------------------------------------------------------

	i = 1;
	cout << endl;

	while (i <= n) {
		int j = n;
		while (i <= j) {
			j--;
			cout << " ";
		}

		int l = 1;
		i++;

		while (l < i) {
			cout << stars;
			l++;
		}

		cout << endl;
	}

	//----------------------------------------------------------------------------------------------------------------

	i = n;
	cout << endl;

	while (i >= 1) {
		int j = i;
		while (j >= 1) {
			j--;
			cout << stars;
		}

		i--;
		cout << endl;
	}

	//----------------------------------------------------------------------------------------------------------------

	i = n;
	cout << endl;

	while (i >= 1) {
		int j = i;
		while (j <= n - 1) {
			j++;
			cout << " ";
		}

		int l = i;


		while (l >= 1) {
			cout << stars;
			l--;
		}


		i--;
		cout << endl;
	}

	system("pause");
	return 0;
}