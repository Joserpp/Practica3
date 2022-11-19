#include <iostream>
#include <fstream>
#include <letters_bag.h>
#include "dictionary.h"
#include "letters_set.h"

using namespace std;

int main(int argc, char *argv[]){

    ifstream fi1(argv[1]);

    ifstream fi2(argv[2]);

    Dictionary diccionario;

    string cad;

    while(fi1 >> cad)
        diccionario.insert(cad);

    LetterSet conjunto;

    fi2 >> conjunto;

    map<char, LetterInfo> mapa = conjunto.getLetter();

    cout << "Letra\tFAbs.\tFrel." << endl;

    for(map<char, LetterInfo>::const_iterator pos = mapa.cbegin(); pos != mapa.cend(); ++pos){

        cout << pos->first << "\t" << diccionario.getOcurrences(pos->first) << 
        "\t" << ((double)diccionario.getOcurrences(pos->first)/(double)diccionario.gettotallLertters())
        << endl;
    }

    return 0;
}