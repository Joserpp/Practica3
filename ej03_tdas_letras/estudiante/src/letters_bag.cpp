#include "letters_bag.h"


//solo tiene bag <char> letters
LettersBag(const LetterSet & letterSet){

    //usar iterator
    for(int i=0;i<letterSet.size();i++)
       for(int j=0;j<letterSet[i].repetitions;j++)

    
}

void LettersBag::insertLetter(const char & l){

    letters.add(l);

}

char LettersBag::extractLetter(){

    //Obtengo un numero aleatorio desde 0 hasta size
    T extraido;

    extraido=letters.get();

    return extraido;
}

vector<char> extractLetters(int num){

    vector<char> extraidos;
    
    for(int i=0;i<num;i++)
        extraidos.push_back(letters.get());

    return extraidos;
}




