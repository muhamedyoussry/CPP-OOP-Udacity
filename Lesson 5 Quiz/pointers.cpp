/*Goal: Find out why you care about pointers*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int number;
    char character;
    string sentence;

    int *pointerI;
    char *pointerC;
    string *pointerS;

    pointerI = &number;
    *pointerI = 45;

    pointerC = &character;
    *pointerC = 'f';

    pointerS = &sentence;
    cout << "Enter any sentance : ";
    getline(cin, sentence);
    *pointerS = sentence;

    cout << "number = " << number << "\n";
    cout << "character = " << character << "\n";
    cout << "sentence = " << sentence << "\n";

    return 0;
}