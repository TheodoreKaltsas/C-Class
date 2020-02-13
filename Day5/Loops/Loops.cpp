#include <iostream>

using namespace std;

int main()
{
	int lines = 0;
	int n;

	cout << "Input an integer for n and I will tell you how many line numbers there are! " << endl;
	cin >> n;

	while (lines < n) {
		cout << "This is line number: " << lines << endl;
		lines++;
	}

	system("pause");
	return 0;
}
