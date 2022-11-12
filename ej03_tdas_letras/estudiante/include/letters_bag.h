#ifndef __LETTERS_BAG_H__
#define __LETTERS_BAG_H__

/**
 * @brief TDA LettersBag
 *
 * Este TDA almacena un conjunto de chars utilizado en el juego de letras.
 * La estructura de datos subyacente es una lista de chars.
 */

#include <iostream>
#include "letters_set.h"
#include "bag.h"

class LettersBag {
    private:
        Bag <char> letters;
    
    public:

        LettersBag(const LettersSet & letterSet);
        
        void insertLetter(const char & l);

        char extractLetter();

        char extractLetter(int num);

        void clear();

        int size();

        LettersBag & operator=(const LettersBag & other);
}


#endif