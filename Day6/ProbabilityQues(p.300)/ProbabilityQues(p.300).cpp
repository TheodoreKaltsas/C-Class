#include <iostream>

using namespace std;

int main()
{
	double const EULERNUMBER = 2.7182818284590452353602874713527;
	double averageCallLength;
	double t = 1.0;

	cout << "Enter the average call length: " << endl;
	cin >> averageCallLength;

	do {
		double probability = (1 - pow(EULERNUMBER, (-t) / averageCallLength));
		cout << "The probability of a call lasting " << t << " minute(s) is " << probability << endl;
		t++;

	} while (t < 10);

}
