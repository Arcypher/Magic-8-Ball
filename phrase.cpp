#include "phrase.h"
#include <string>
#include <array>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

const string& phrase::sayPhrase() {
    srand(time(NULL));
    int index = int(rand() % 8);
    return phrases[index];
}

