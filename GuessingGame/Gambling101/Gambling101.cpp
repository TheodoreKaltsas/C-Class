#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int n;

    for (int i = 0; i < 20; i++) {
        n = rand() % 10 + 1;
        cout << n << endl;
    }
}
