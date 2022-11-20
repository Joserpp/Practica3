#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__

/**
 * @brief TDA Dictionary
 * @details Almacena las palabras de un fichero de texto y permite iterar sobre ellas
 *
 */

#include <set>
#include <vector>
#include <string.h>
#include <iostream>

using namespace std;

/**
 * @brief TDA Dictionary
 * @details Se almacenan plabras de un fichero de texto.
 */

class Dictionary{
    private:
        set <string> words;
    
    public:

        /**
         * @brief Constructor por defecto que crea un Diccionario vacío.
         */
        
        Dictionary();

        /**
         * @brief Constructor de copia que crea un diccionario igual que el pasado
           como argumento.
         * @param other diccionario explicito del que se copia el implicito.
         */

        Dictionary(const Dictionary & other);

        /**
         * @brief Indica si una palabra está en el diccionario.
         * @param val La palabra que se busca si existe.
         * @return un bool que indica si la palabra existe o no.
         */

        bool exists(const string & val) const;

        /**
         * @brief Inserta una palabra en el diccionario.
         * @param val Palabra que se inserta en el diccionario.
         * @return un bool que indica si se ha realizado bien la inserción.
         */

        bool insert(const string & val);

        /**
         * @brief Elimina una plabra en el diccionario.
         * @param val Palabra que se borra edel diccionario
         * @return bool que indica si se ha borrado la palabra.
         */ 

        bool erase(const string & val);

        /**
         * @brief Borra el diccionario.
         * @brief Elimina todas las palabras del diccionario.
         */

        void clear();

        /**
         * @brief Comprueba si esta vacío el diccionario
         * @return bool que indica si el diccionario está vcío.
         */

        void empty() const;

        /**
         * @brief Tamaño del diccionario.
         * @return Tamaño del diccionario(Palabras que hay en él).
         */

        unsigned int size() const;

        /**
         * @brief Indica el número de aparaciones de una letra.
         * @param c Letra que se buscará.
         * @return múmero entero con el número de apariciones.
         */

        int getOcurrences (const char c);

        /**
         * @brief Cuenta el total de letras del diccionario.
         * @return Entero con el total de letras.
         */

        int gettotallLertters();

        /**
         * @brief Devuelve las palabras en el diccionario con la longitud dada.
         * @param length Longitud de las palabras.
         * @return Vector de palabras con la longitud pasada como parámetro.
         */

        vector<string> wordsOfLength(int length);

        class iterator{
            private:
                set<string>::iterator it;

            public:
                iterator(){}
                iterator(const set<string>::iterator & otro): it(otro){}
                iterator(const iterator & otro): it(otro.it){}
                ~iterator(){}
                iterator & operator = (const set<string>::iterator & otro){

                    it = otro;
                    return *this;
                }

                iterator & operator = (const iterator & otro){

                    it = otro.it;
                    return *this;
                }

                string operator *()const{
                    return *it;
                }
                
                iterator & operator ++ (){

                    ++it;
                    return *this;
                }

                iterator & operator -- (){

                    --it;
                    return *this;
                }

                iterator & operator ++ (int){

                    it++;
                    return *this;
                }

                iterator & operator -- (int){

                    it--;
                    return *this;
                }

                bool operator != (const iterator & otro){
                    
                    return (it != otro.it);
                }

                bool operator == (const iterator & otro){
                    
                    return (it == otro.it);
                }
        };

        iterator begin(){
                    
            iterator i = words.begin();
            return i;
        }

        iterator end(){
            
            iterator i = words.end();
            return i;
        }

        class const_iterator{
            private:
                set<string>::const_iterator it;

            public:
                const_iterator(){}
                
                const_iterator(const set<string>::const_iterator & otro): it(otro){}
                
                const_iterator(const const_iterator & otro): it(otro.it){}
                
                ~const_iterator(){}
                
                const_iterator & operator = (const set<string>::const_iterator& otro){
                    
                    it=otro;
                    return *this;
                }
                
                const_iterator & operator = (const const_iterator& otro){
                    
                    it=otro.it;
                    return *this;
                }
                
                string operator*()const{
                    
                    return *it;
                }
                
                const_iterator& operator++(){
                    
                    ++it;
                    return *this;
                }
                
                const_iterator& operator--(){
                    
                    --it;
                    return *this;
                }
                
                const_iterator& operator++(int){
                    
                    it++;
                    return *this;
                }
                
                const_iterator& operator--(int){
                    
                    it--;
                    return *this;
                }
                
                bool operator!=(const const_iterator& otro){
                    
                    return it != otro.it;
                }
                
                bool operator==(const const_iterator& otro){
                    
                    return it == otro.it;
                }
        };

        const_iterator cbegin()const{
                    
            const_iterator i = words.cbegin();
            return i;
        }

        const_iterator cend()const{
            
            const_iterator i = words.cend();
            return i;
        }

        friend ostream & operator << (ostream & os, const Dictionary & dic);

        friend istream & operator >> (istream & is, const Dictionary & dic);
};

#endif
