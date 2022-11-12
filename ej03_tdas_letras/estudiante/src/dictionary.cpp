#include "dictionary.h"
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

Dictionary::Dictionary(){}

Dictionary::Dictionary(const Dictionary & other): words(other.words){}

bool Dictionary::exists(const string & val) const{

    bool existe = false;

    for(Dictionary::const_iterator pos = Dictionary::cbegin(); pos != Dictionary::cend(); 
        pos.operator++())

        if(*pos == val)
            existe = true;

        return existe;
}

bool Dictionary::insert(const string & val){

    pair<set<string>::iterator,bool> par;

    par = words.insert(val);

    return par.second;
}

bool Dictionary::erase(const string & val){

    bool borrado;

    borrado = words.erase(val);

    return borrado;
}

void Dictionary::clear(){

    words.clear();
}

void Dictionary::empty() const{

    words.empty();
}

unsigned int Dictionary::size() const{

    int tamaño;

    tamaño = words.size();

    return tamaño;
}

int Dictionary::getOcurrences (const char c){

    int ocurrences = 0;

    for(Dictionary::const_iterator pos = Dictionary::cbegin(); pos != Dictionary::cend(); 
        pos.operator++()){

        string palabra = *pos;

        for(int i = 0; i < palabra.length(); i++){

            if(toupper(palabra[i]) == toupper(c))
                ocurrences++;
        }
    }

    return ocurrences;
}

int Dictionary::gettotallLertters(){

    int total = 0;

    for(Dictionary::const_iterator pos = Dictionary::cbegin(); pos != Dictionary::cend(); 
        pos.operator++()){
        
        string palabra = *pos;

        total += palabra.length();
    }

    return total;
}

vector<string> Dictionary::wordsOfLength(int length){

    vector<string> total;

    for(Dictionary::const_iterator pos = Dictionary::cbegin(); pos != Dictionary::cend(); 
        pos.operator++()){
        
        string palabra = *pos;

        if(palabra.length() == length)
            total.push_back(*pos);
    }

    return total;
}

ostream & operator << (ostream & os, const Dictionary & dic){}

istream & operator >> (istream & is, const Dictionary & dic){}
