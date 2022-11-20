#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "dictionary.h"
#include <fstream>

using namespace std;

/**
 * Implementaremos un programa para probar el TDA diccionary
 * Construye un Dictionary con el fichero de las palabras, extrae de dicho diccionario las palabras de
 * la longitud que buscamos y las imprime por pantalla.
*/
int main(int argc, char *argv[])
{

    ifstream fi;

    fi.open(argv[1]);

    Dictionary diccionario;

    string palabra;
    //Introducimos primer valor en LetterSet
    while(fi>>palabra)
        diccionario.insert(palabra);

    int longitud_buscada=atoi(argv[2]);

    vector<string> palabras;

    palabras=diccionario.wordsOfLength(longitud_buscada);

    cout<<"Palabras de longitud "<<longitud_buscada<<endl;
    for(vector<string>::iterator pos = palabras.begin(); pos != palabras.end(); pos++)
        cout<<*pos<<endl;

    fi.close();

}