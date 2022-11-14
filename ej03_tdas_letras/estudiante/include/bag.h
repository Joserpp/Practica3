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
#include <cstdlib>
#include <vector>
template <class T>
class Bag {
    private:
        vector<T> v;
    public:
        
        Bag();
        
        Bag(const Bag<T> & other);

        void add (const T & element);

        T get();

        void clear();

        unsigned int size()const;

        bool empty();

        const Bag<T> & operator=(const Bag<T> & other);

};

#endif


template<class T>
Bag<T>::Bag(){}
template<class T>
Bag<T>::Bag(const Bag<T> & other) : v(other.v){
}
template<class T>
void Bag<T>::add(const T & element){
v.push_back(element);
}

template<class T>
T Bag<T>::get(){

    srand(time(NULL));
    int num = rand()%v.size();
    T aux;
    aux = v[num];
    v[num] = v.back();
    v.pop_back();
    return aux;
}
template<class T>
void Bag<T>::clear(){

    v.clear();
}
template<class T>
unsigned int Bag<T>::size() const{

    return v.size();
}
template<class T>
bool Bag<T>::empty(){

    return v.empty();
}
template<class T>
const Bag<T> & Bag<T>::operator=(const Bag<T> & other){

    if (this != &other)
        this->v = other.v;
    return *this;
}
