#include <iostream>

using namespace std;

int main()
{
   const int SIZE = 8;
    double total = 0;
    double array[SIZE];
    cout << "Insert a value for each index of the array." << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i << " = ";
        cin >> array[i];
    }

    cout << "\n\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
        total += array[i];
    }

    cout << "The total is " << total << endl;

    cout << endl;

    double swappedArray[SIZE] = {};
    double temp;
    int k = 0;

    for (int j = SIZE - 1; 0 <= j; j--) {
        temp = array[j];
        array[j] = swappedArray[k];
        swappedArray[k] = temp;
        k++;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Swapped array[" << i << "] = " << swappedArray[i] << endl;
    }

    return 0;
}
