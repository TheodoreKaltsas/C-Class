#include<iostream>

using namespace std;

int main()
{
	int Total = 20;
	int i = 0;
	int j = 4;
	while (i < j)
	{
		Total -= 3 * i * j;
		i++;
		j--;
	}

	cout << Total;
	return 0;
}