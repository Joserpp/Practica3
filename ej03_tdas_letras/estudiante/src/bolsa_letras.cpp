#include <iostream>
#include <fstream>
#include "letters_bag.h"
#include "letters_set.h"

using namespace std;

/**
 * @brief Implementaremos un programa de prueba del TDA LettersBag que realice las siguientes operaciones:
* - Cree un conjunto de letras (LettersSet), y lo rellene a partir de la información leída de un
* archivo.
* - Cree una bolsa de letras (LettersBag), y la rellene con la información del LettersSet anterior
* - Extraiga todas las letras de la LettersBag (aleatoriamente) y las imprima por pantalla.
*/

int main(int argc, char *argv[])
{
    LetterSet conjunto;

    ifstream fi;

    fi.open(argv[1]);

    fi >> conjunto;

    LettersBag bolsa(conjunto);

    for(int i = bolsa.size(); i > 0; i--)
        cout << bolsa.extractLetter() << endl;
}