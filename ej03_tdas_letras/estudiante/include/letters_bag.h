#ifndef __LETTERS_BAG_H__
#define __LETTERS_BAG_H__

/**
 * @brief TDA LettersBag
 *
 * Este TDA almacena un conjunto de chars utilizado en el juego de letras.
 * La estructura de datos subyacente es una lista de chars.
 */

#include "bag.h"
#include "letters_set.h"
#include <stdlib.h>
#include <time.h>
#include <vector>

class LettersBag {
    private:
        Bag <char> letters;
    
    public:
        
        LettersBag();

        LettersBag(const LetterSet & letterSet);
        
        void insertLetter(const char & l);

        char extractLetter();

        vector<char> extractLetters(int num);

        void clear();

        unsigned int size();

        LettersBag & operator=(const LettersBag & other);
};


#endif