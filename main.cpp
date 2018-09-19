/*
 *  This is a magic-8-ball. The project consists of an array
 *  that stores eight phrases and returns the phrase at a
 *  random index in the array.
 *
 */
#include "phrase.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    phrase phraseObject;
    string command;
    cout << "Hello and welcome to the magic-8-ball! Press enter so you can see what your fortune is!" << endl;
    cout << "Type \"end-of-line (CTRL+Z)\" command so you can exit the program!" << endl;
    int numberOfFortunes = 0;

    while (getline(cin, command)) {
        cout << phraseObject.sayPhrase();
        numberOfFortunes++;
    }
    cout << endl;
    return 0;
}
