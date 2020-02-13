#include <iostream>

using namespace std;

int main()
{
	char code;
	cout << "How are you feeling today? Do you feel good (u) or another way?" << endl;
	cout << "Input U or something else: ";
	cin >> code;

	if (tolower(code) == 'u') {
		cout << "I FEEL GREAT TODAY!" << endl;
	}
	else {
		cout << "I FEEL DOWN TODAY #$*!" << endl;
	}
	return 0;
}
