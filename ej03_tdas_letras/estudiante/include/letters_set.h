#ifndef __LETTER_SET_H__
#define __LETTER_SET_H__

#include <iostream>
#include <map>

using namespace std;

/**
 * @brief TDA LetterInfo
 *
 * Contiene información sobre un determinado carácter del juego de las
 * letras. En concreto, almacena información sobre el número de repeticiones de
 * la letra en la partida y de la puntuación que otorga al utilizarse en una
 * palabra
 */

/**
 * @brief TDA LettersSet
 *
 * Este TDA representa un conjunto de letras, con la información necesaria para
 * jugar una partida al juego de las letras, es decir, el número de repeticiones
 * que tenemos de la letra y la puntuación que dicha letra otorga cuando se
 * utiliza en una palabra
 */

struct LetterInfo{
    int repetitions;
    int score;
};

class LetterSet{
    
    private:
        map <char,LetterInfo> letters;
    
    public:
    
    bool insert(const pair<char,LetterInfo> & val);

    bool erase(const char & key);
    
    void clear();
    
    unsigned int size();

    bool empty();

    int getScore(string word);

    LetterSet & operator=(const LetterSet & cl);

    LetterInfo & operator[](const char & val);

    friend ostream & operator<<(ostream & os, const LetterSet & cl);

    friend istream & operator>>(istream & is, LetterSet & cl);

    map <char,LetterInfo> getLetter()const;

    class iterator{
            private:
                map<char,LetterInfo>::iterator it;

            public:
                iterator(){}
                iterator(const map<char,LetterInfo>::iterator & otro): it(otro){}
                iterator(const iterator & otro): it(otro.it){}
                ~iterator(){}
                iterator & operator = (const map<char,LetterInfo>::iterator & otro){

                    it = otro;
                    return *this;
                }

                iterator & operator = (const iterator & otro){

                    it = otro.it;
                    return *this;
                }

                pair<char,LetterInfo> operator *()const{
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
                    
            iterator i = letters.begin();
            return i;
        }

        iterator end(){
            
            iterator i = letters.end();
            return i;
        }

        class const_iterator{
            private:
                map<char,LetterInfo>::const_iterator it;

            public:
                const_iterator(){}
                
                const_iterator(const map<char,LetterInfo>::const_iterator & otro): it(otro){}
                
                const_iterator(const const_iterator & otro): it(otro.it){}
                
                ~const_iterator(){}
                
                const_iterator & operator = (const map<char,LetterInfo>::const_iterator& otro){
                    
                    it=otro;return *this;
                }
                
                const_iterator & operator = (const const_iterator& otro){
                    
                    it=otro.it;return *this;
                }
                
                pair<char,LetterInfo> operator *()const{
                    
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
                    
                    it++;return *this;
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
                    
            const_iterator i = letters.cbegin();
            return i;
        }

        const_iterator cend()const{
            
            const_iterator i = letters.cend();
            return i;
        }

};

#endif
