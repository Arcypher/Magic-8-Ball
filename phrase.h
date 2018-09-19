#ifndef GUARD_PHRASE_H
#define GUARD_PHRASE_H
#include <string>
using namespace std;

class phrase {
private:
    string phrases [8] = {
    "Try Again!",
    "Today will not be a good day.",
    "You will be blessed with great fortune (and a way to a new world)!",
    "What if told you I am hungry?",
    "Zzzzzzzzzzz....",
    "HIP, SKIP, HOP, JUMP, TRIP AND BREAK MYSELF INTO PIECES.",
    "I love you!",
    "I don't who you are, but I will find yo--"};
public:
    const string& sayPhrase();
};


#endif // GUARD_PHRASE_H

