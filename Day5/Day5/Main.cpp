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
	int space = n;



	while (i <= n) {
		int j = 1;
		while (j <= i) {
			j++;
			cout << stars;
		}

		i++;
		cout << endl;
	}
	

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

	system("pause");
	return 0;
}