#ifndef __BAG_H__
#define __BAG_H__

/**
 *  \brief TDA abstracto Bolsa
 *
 *  Este TDA abstracto nos permite trabajar con una colección de elementos que
 *  permite la extracción de elementos de forma aleatoria sin reemplazamiento
 */

#include <stdlib.h>
#include <time.h>

template <class T>
class Bag {
    private:
        vector<T> v;
    public:
        Bag<T>::Bag(const Bag<T> & other){
            v = other;
        }

        void Bag<T>::add (const T & element){
            v.push_back(element);
        }

        T Bag<T>::get(){

            
        }

        void Bag<T>::clear();

        unsigned int Bag<T>::size();

        bool Bag<T>::empty();

        const Bag<T> & Bag<T>::operator =(const Bag<T> & other);
};

#endif
