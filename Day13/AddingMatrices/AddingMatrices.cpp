#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 5, COLUMNS = 5;
    double A[ROWS][COLUMNS], B[ROWS][COLUMNS], C[ROWS][COLUMNS]; 
    
    cout << "Insert the values for our first matrix A which is 5x5" << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "Enter A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }   

    cout << "\n";
    cout << "Insert the values for our Second matrix B which is 5x5" << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "Enter B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Your first matrix is: \n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Your second matrix is: \n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "\t" << B[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Your new, added matrix is: \n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "\t" << C[i][j];
        }
        //after the j loop, we would be done with one row.
        cout << endl;
    }

    cout << endl;

    system("pause");
    return 0;
}
