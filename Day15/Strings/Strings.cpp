#include <iostream>
#include <string>

using namespace std;

int main()
{
    char statement[] = "You should like C++";
    cout << "The string before is: " << statement << endl;
    //to cut the string at like, must use \0
    statement[15] = '\0';
    cout << "The string after is: " << statement << endl;

    char anotherSt[] = " cake";
    //To copy one string into another, we use strcpy_s
    char theNew[128];
    strcpy_s(theNew, statement);
    //strcat_s or Concatenate means two strings are added together
    strcat_s(theNew, anotherSt);
    cout << "The new string is: " << theNew << endl;

//--------------------------------------STRINGS NOW BOY--------------------------------------------
    string cplusplus = "You should like C++";
    cplusplus.replace(15, 20, "");
    cout << "Your C++ string my good person: " << cplusplus << endl;

    string newStr = "cake";
    string together = cplusplus + newStr;
    cout << "Together is: " << together << endl;

    cout << "The character at index 14 is: " << together.at(14) << endl;
    cout << "The length of the string is: " << together.length() << endl;
    cout << "result compare: " << together.compare(theNew) << endl;

    cout << "The character c is at: " << newStr.find('a') << endl;
    //The function .insert(index, value to insert) allows us to insert values into strings
    newStr.insert(0, "I like ");
    cout << "The new newStr string value is: " << newStr << endl;

    return 0;
}
