#include <iostream>

using namespace std;

double sumarray(double A[], int s) {
    double sum = 0;

    for (int i = 0; i < s; i++) {
        sum += A[i];
    }

    return sum;

}

int main()
{
    const int SIZE = 10;
    double myAr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Input a value for the Array index " << i << endl;
        cout << "Value = ";
        cin >> myAr[i];
    }

    double result = sumarray(myAr, SIZE);

    cout << "The sum of the values in the array is " << result << endl;
   
}

