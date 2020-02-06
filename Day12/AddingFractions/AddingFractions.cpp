// AddingFractions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int greatestCommonDivisor(int x, int y) {
    int remainder = x % y;

    while (remainder != 0) {
        remainder = x % y;
        y = x;
        x = remainder;
    }

    return y;
}


void Addition(int n1, int n2, int d1, int d2, int& Rn, int& Rd) {
    int lcm;
    int gcd;

    lcm = greatestCommonDivisor(d2, d1);
    cout << "The LCM is " << lcm << endl;

     
    Rn = ((n1 * lcm / d1) + (n2 * lcm / d2));
    Rd = lcm;

    gcd = greatestCommonDivisor(Rd, Rn);

    if (gcd > 1) {
        Rn /= gcd;
        Rd /= gcd;
    }
    else {
        cout << "It's all good it can't be reduced\n";
    }
}

void Subtraction(int n1, int n2, int d1, int d2, int& Rn, int& Rd) {
    int lcm;
    int gcd;

    lcm = greatestCommonDivisor(d2, d1);
    cout << "The LCM is " << lcm << endl;


    Rn = ((n1 * lcm / d1) - (n2 * lcm / d2));
    Rd = lcm;

    gcd = greatestCommonDivisor(Rd, Rn);

    if (gcd > 1) {
        Rn /= gcd;
        Rd /= gcd;
    }
    else {
        cout << "It's all good it can't be reduced\n";
    }
}

void Multiplication(int n1, int n2, int d1, int d2, int& Rn, int& Rd) {
    int gcd; 
    
    Rn = n1 * n2;
    Rd = d1 * d2;


    gcd = greatestCommonDivisor(Rd, Rn);

    if (gcd > 1) {
        Rn /= gcd;
        Rd /= gcd;
    }
    else {
        cout << "It's all good it can't be reduced\n";
    }
}

void Division(int n1, int n2, int d1, int d2, int& Rn, int& Rd) {
    int gcd;

    Rn = n1 * d2;
    Rd = d1 * n2;


    gcd = greatestCommonDivisor(Rd, Rn);

    if (gcd > 1) {
        Rn /= gcd;
        Rd /= gcd;
    }
    else {
        cout << "It's all good it can't be reduced\n";
    }
}

int main()
{
    int n1, n2, d1, d2, numerator, denominator;
    char operation;
    cout << "Input a value for the operations and I will perform it!\n";
    cout << "+ is for addition, - is for subtraction, * is for multiplication and / is for division\n";
    cin >> operation;
    cout << "Now that you chose " << operation << " input a numerator and denominator for the first fraction\n";
    cin >> n1 >> d1;
    cout << "The first fraction is " << n1 << "/" << d1 << endl;
    cout << "Now, input a numerator and denominator for the second fraction\n";
    cin >> n2 >> d2;
    cout << "The second fraction is " << n2 << "/" << d2 << endl;


    switch (operation) {
    case '+':
        Addition(n1, n2, d1, d2, numerator, denominator);
        cout << "The resulting fraction is " << numerator << "/" << denominator << endl;
        break;
    case '-':
        Subtraction(n1, n2, d1, d2, numerator, denominator);
        cout << "The resulting fraction is " << numerator << "/" << denominator << endl;
        break;
    case '*':
        Multiplication(n1, n2, d1, d2, numerator, denominator);
        cout << "The resulting fraction is " << numerator << "/" << denominator << endl;
        break;
    case '/':
        Division(n1, n2, d1, d2, numerator, denominator);
        cout << "The resulting fraction is " << numerator << "/" << denominator << endl;
        break;
    default: 
        cout << "Insert a valid operation you person's person\n";
        break;

    }

    return 0;

}
