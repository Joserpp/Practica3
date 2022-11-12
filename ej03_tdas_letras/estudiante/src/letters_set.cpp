#include "letters_set.h"
#include <iostream>
#include "string.h"
#include <map>

using namespace std;

LetterSet::LetterSet(){

    letters[]
}

LetterSet::LetterSet(const LetterSet & other){

    letters=other.letters;
}

//Solo puede estar registrado una unica clave por ello debemos de comprobar
//que la clave no se repita
bool LetterSet::insert(const pair<char,LetterInfo> & val){
    bool condicion=true;
    for(map<char, LetterInfo>::iterator pos = letters.begin(); pos != letters.end() && condicion; pos++)

        if(pos->first==val.first)
            condicion=false;

    if(condicion)
        letters.insert(val);

    return condicion;
}

bool LetterSet::erase(const char & key){

    return letters.erase(key);
}

bool LetterSet::empty(){

    return (letters.empty());
      
}



void LetterSet::clear(){

    letters.clear();
}

unsigned int LetterSet::size(){
   return letters.size();
}

int LetterSet::getScore(string word){

    int puntuacion=0;
    int longitud = word.length();
    
    //Recorremos cada letra
    for(int i=0;i<longitud;i++){
        
        

        if(letters.contains(c))
            puntuacion+=letters[c].score;
        
    }
return puntuacion;
}


LettersBag & LettersBag operator= (const LettersBag & other){
    
    letters=other.letters;
}


  map <char,LetterInfo> letters;