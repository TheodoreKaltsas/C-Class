#include <iostream>
#include <ctime>

using namespace std;

int generatedValue() {    
    int n = rand() % 10 + 1;

    return n;
}

void checkGuess(int guess, int value, double betAmount, int& money) {
    if (guess == value) {
        cout << "Congratulations, you just won x10 of the amount of money you bet" << endl;
        money = (money * betAmount) * 10;
        cout << "The current amount of money you have is " << money << endl;

    }
    else {
        cout << "Sorry you guessed wrong, time to take your money " << endl;
        money = money - (money * betAmount);
        cout << "The current amount of money you have is " << money << endl;
    }
}

int main()
{
    srand(time(0));

    int money = 1000;
    char response = 'y';

    int guess;
    double betAmount;
    
    cout << "Welcome to this guessing game, in this game you must guess a number between 1 and 10!" << endl;
    cout << "If you guess correctly, you will win x10 what you bet, if not you lose your money." << endl;
    cout << "You can only bet your money in increments of tenths (1/10, 2/10 and so on)." << endl;
    cout << "Now you are free to go and guess your first number! Good luck and don't lose!" << endl;
    cout << "\n\n";
    
    while (money != 0 && response == 'y') {
        cout << endl;
       
        int value = generatedValue();
        cout << "(Hint: The value is): " << value << endl;

        cout << "How much of your money would you like to be (Remember, insert a whole number to be put into an increment of a tenth)\n";
        cin >> betAmount;
        cout << "Pick a number, any number between 1 and 10: " << endl;
        cin >> guess;

        betAmount /= 10;
        checkGuess(guess, value, betAmount, money);

        if (money == 0) {
            cout << "Tough luck you lost! Now get out of my casino until you have cash!" << endl;
            break;
        }

        cout << "Would you like to bet again? [y/n]: " << endl;
        cin >> response;

        if (response == 'y') {
           cout << "Well we'd love to have your money, I mean company still!" << endl;
           continue;
        }
        else {
           cout << "Well we'd love for you to play again, come back to give me money again soon." << endl;
           cout << "The amount of money you ended with was " << money << endl;
           break;
        }
    }

    return 0;
}
