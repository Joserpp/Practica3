#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "letters_set.h"
#include <fstream>

using namespace std;

/**
 * Implementaremos un programa para probar el funcionamiento del TDA LettersSet
 * El programa tendrá los siguientes argumentos: 
 * 1. Ruta al archivo con información sobre el conjunto de letras
 * 2. Palabra de la que calcular la puntuación
 * E imprimirá por pantalla la puntuación de dicha palabra.
*/

int main(int argc, char *argv[])
{

    LetterSet valor;

    ifstream fi;

    fi.open(argv[1]);

    fi>>valor;

    string palabra;

    palabra=argv[2];

    int puntuacion;

    puntuacion = valor.getScore(palabra);

    cout<<puntuacion<<endl;

}