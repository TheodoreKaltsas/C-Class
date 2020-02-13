#include <iostream>

using namespace std;

int main()
{
	char  Current, Previous;
	int Count = 0;

	cout << "enter a character(enter 0 if you want to quit) : ";
	cin >> Current;
	Previous = Current;

	while (Current != '0')
	{
		cout << "enter a character(enter 0 if you want to quit) : ";
		cin >> Current;

		if (Current == Previous)
		{
			Count = Count + 1;
		}
		Previous = Current;

	}
	cout << "The number is : " << Count << endl;
	return 0;
}
