#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3, COLUMNS = 4;
    int A[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << "Enter A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Your matrix is: \n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            //Here you are dwealing with element A[i][j]
            cout << "\t" << A[i][j];
        }
        //after the j loop, we would be done with one row.
        cout << endl;
    }

    cout << endl;

    int totalRow = 0;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            totalRow += A[i][j];
        }

        cout << "The total of row " << i << " is " << totalRow << endl << endl;
        totalRow = 0;
    }

    cout << endl;

    int totalColumn = 0;
    for (int i = 0; i < COLUMNS; i++) {
        for (int j = 0; j < ROWS; j++) {
            totalColumn += A[j][i];
        }

        cout << "The total of column " << i << " is " << totalColumn << endl << endl;
      
        totalColumn = 0;
    }

    system("pause");
    return 0;
}
