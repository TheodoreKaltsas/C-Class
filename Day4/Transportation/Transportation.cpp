#include <iostream>

using namespace std;

int main()
{
	double coefficientOfFriction, speedAtImpact, speedBeforeSkid, skidMarkDistance, conversionFactor, accelerationDueToGravity;

	int decision;
	
	cout << "In order to determine the speed before skid, would you like to use metric or US Customary units?" << endl;
	cout << "Input 1 for metric and 2 for US Customary" << endl;
	cin >> decision;

	if (decision == 1) {
		cout << "Please input the coefficient of friction" << endl;
		cin >> coefficientOfFriction;
		cout << "Please input the estimated speed at impact (in km/hr)" << endl;
		cin >> speedAtImpact;
		cout << "Please input the skid mark distance (in meters)" << endl;
		cin >> skidMarkDistance;

		conversionFactor = 12.96;
		accelerationDueToGravity = 9.81;
	
		speedBeforeSkid = sqrt((pow(speedAtImpact,2)) + (2 * conversionFactor * skidMarkDistance * accelerationDueToGravity * coefficientOfFriction));
		cout << "Based on this, the speed before skid is: " << speedBeforeSkid << " km/hr" << endl;

	}
	else if(decision == 2)
	{
		cout << "Please input the coefficient of friction" << endl;
		cin >> coefficientOfFriction;
		cout << "Please input the estimated speed at impact (in mi/hr)" << endl;
		cin >> speedAtImpact;
		cout << "Please input the skid mark distance (in feet)" << endl;
		cin >> skidMarkDistance;

		conversionFactor = 0.4649;
		accelerationDueToGravity = 32.2;

		speedBeforeSkid = sqrt((pow(speedAtImpact, 2)) + (2 * conversionFactor * skidMarkDistance * accelerationDueToGravity * coefficientOfFriction));
		cout << "Based on this, the speed before skid is: " << speedBeforeSkid << " mi/hr" << endl;
	}

	return 0;
}
