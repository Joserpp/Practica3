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

            if(!v.empty()){

                int a = rand() % v.size();

                T devolver=v[a];
                
                v.erase(a);
                
                return devolver;
            }

            //Pensar que hacer si esta vacia
        }

        void Bag<T>::clear(){
            v.clear();
        }

        unsigned int Bag<T>::size(){
            return v.size();
        }

        bool Bag<T>::empty(){
            return v.empty();
        }

        const Bag<T> & Bag<T>::operator =(const Bag<T> & other){

            //Memoria dinamica?
        }
};

#endif
