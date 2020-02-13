#include <iostream>

using namespace std;

int main()
{
	int N = 40;
	double p = 1.2e-6;
	double m = 12e2;
	double argument1 = pow(p*(1e10) - m , 3);
	double argument2 = pow(sqrt(N) - m, 4);
	double S = cbrt((N * sqrt(argument1)/argument2));
	cout << "S is equal to: " << S << endl;
	return 0;
}