#include <iostream>

using namespace std;

double powerGen(double Q, double H);

int main()
{
    double power, Q, H;

    H = 14;
    Q = 20;
    power = powerGen(Q, H);
    cout << "The power generated, in watts, by a flow rate " << Q << " (m^3/s) and a head of " << H << " (m) is " <<
        power << endl;

    H = 30;
    power = powerGen(Q, H);
    cout << "The power generated, in watts, by a flow rate " << Q << " (m^3/s) and a head of " << H << " (m) is " <<
        power << endl;

    return 0;
}

double powerGen(double Q, double H) {
    double power;
    const double ACCELDUETOGRAVITY = 9.81;
    const double WATERDENSITY = 997;

    power = WATERDENSITY * Q * H * ACCELDUETOGRAVITY;

    return power;
}
