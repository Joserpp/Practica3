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

    /**
     * @brief Constructor por defecto que crea un LetterSet vacío.
     */
    
    LetterSet();

    /**
     * @brief Constructor de copia que crea un LetterSet igual que el pasado
     como argumento.
     * @param other LetterSet explicito del que se copia el implicito.
     */

    LetterSet(const LetterSet & other);

    /**
     * @brief Inserta un elemento en el LetterSet.
     * @param val Pareja de una letra y Letterinfo que se inserta
     * @return un bool que indica si se ha realizado bien la inserción.
     */

    bool insert(const pair<char,LetterInfo> & val);

    /**
     * @brief Elimina un acracter del LetterSet.
     * @param val Caracter que se elimina.
     * @return bool que indica si se ha borrado la palabra.
     */

    bool erase(const char & key);

    /**
     * @brief Borra el contenido de LetterSet.
     */
    
    void clear();

    /**
     * @brief Tamaño del LetterSet.
     * @return Tamaño del LetterSet(elementos que hay en él).
     */
    
    unsigned int size();

    /**
     * @brief Comprueba si esta vacío el LetterSet.
     * @return bool que indica si el letterSet está vcío.
     */

    bool empty();

    /**
     * @brief Calcula la puntuacíon de la plaabra
     * @param word palabra de la cual queremos calcular la puntuación.
     * @return Puntuación de la palabra.
     */

    int getScore(string word);

    /**
     * @brief sobra carga del operador de asignación.
     * @param cl Letterset que se copia.
     * @return Referencia alobjeto implicito.
     */

    LetterSet & operator=(const LetterSet & cl);

    /**
     * @brief Sobrecarga del operador corchete.
     * @brief Accede a los elementos del del map.
     * @param val Caracter a consultar.
     * @return Letterinfo con la información del caracter.
     */

    LetterInfo & operator[](const char & val);

    /**
     * @brief Sobrecarga del operador de salida.
     * @param os flujo de salida.
     * @param cl LetterSet que se manda al flujo de salida.
     * @return flujo de salida.
     */

    friend ostream & operator<<(ostream & os, const LetterSet & cl);

    /**
     * @brief Sobrecarga del operador de entrada.
     * @param is flujo de entrada.
     * @param cl LetterSet que se almacena en el flujo de entrada.
     * @return flujo de entrada.
     */

    friend istream & operator>>(istream & is, LetterSet & cl);

    /**
     * @brief Devuelve el atributo privado mapa.
     * @return Atributo privado map.
     */

    map <char,LetterInfo> getLetter() const;

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
