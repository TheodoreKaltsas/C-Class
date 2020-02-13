#include <iostream>

using namespace std;

int main()
{
	double initialAmount = 0.01;
	
	for (int i = 1; i <= 64; i++) {
		cout << "The amount the beggar has on day " << i << " is " << initialAmount << endl;
	   

		if (initialAmount < 1400000 && initialAmount > 1000000) {
			cout << "The day the beggar got paid $1000000 is " << i << endl;
		}

		initialAmount *= 2;
	}

	return 0;
}
