#ifndef __LETTERS_BAG_H__
#define __LETTERS_BAG_H__

/**
 * @brief TDA LettersBag
 *
 * Este TDA almacena un conjunto de chars utilizado en el juego de letras.
 * La estructura de datos subyacente es una lista de chars.
 */

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

        ostream & operator =(ostream & p, const LettersBag & bolsa_letras){
        
            Bag <char> nuevo;
            for(int i=0;i<bolsa_letras.size();i++){



            }




        }
}


#endif



#ifndef __BAG_H__
#define __BAG_H__

/**
 *  \brief TDA abstracto Bolsa
 *
 *  Este TDA abstracto nos permite trabajar con una colección de elementos que
 *  permite la extracción de elementos de forma aleatoria sin reemplazamiento
 */

template <class T>
class Bag {
    private:
        vector<T> v;
    public:
        Bag<T>::Bag(const Bag<T> & other);

        void Bag<T>::add (const T & element);

        T Bag<T>::get();

        void Bag<T>::clear();
};

#endif