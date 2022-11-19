#include <iostream>
#include <fstream>
#include "letters_bag.h"
#include "letters_set.h"

using namespace std;

int main(int argc, char *argv[])
{
    LetterSet conjunto;

    ifstream fi;

    fi.open(argv[1]);

    fi >> conjunto;

    LettersBag bolsa(conjunto);

    for(int i = bolsa.size(); i > 0; i--)
        cout << bolsa.extractLetter() << endl;
}