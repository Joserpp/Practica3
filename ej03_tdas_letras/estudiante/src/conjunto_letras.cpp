#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "letters_set.h"
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{

    LetterSet valor;

    ifstream fi;

    fi.open(argv[1]);


    //Introducimos primer valor en LetterSet

    fi>>valor;

    string palabra;

    palabra=argv[2];

    int puntuacion;

    puntuacion = valor.getScore(palabra);

    cout<<puntuacion<<endl;

}