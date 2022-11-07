#include "letters_bag.h"



LettersBag(const LetterSet & letterSet){

    ifstream archivo_letras("letras.txt");

    LetterSet conjunto_letras;
    archivo_letras >> conjunto_letras;

    LettersBag bolsa_letras(conjunto_letras);
    
}

void LettersBag::insertLetter(const char & l){

    letters.add(l);

}

