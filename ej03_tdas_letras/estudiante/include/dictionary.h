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

class Dictionary{
    private:
        set <string> words;
    
    public:
        
        Dictionary();

        Dictionary(const Dictionary & other);

        bool exists(const string & val) const;

        bool insert(const string & val);

        bool erase(const string & val);

        void clear();

        void empty() const;

        unsigned int size() const;

        int getOcurrences (const char c);

        int gettotallLertters();

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
