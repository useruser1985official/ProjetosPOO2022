#include <iostream>
#include <cstdlib>
#include <clocale>
#include "Generico.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    Gerador<string> *texto = new Generico<string>();

    texto->setEnt("Exemplo de Texto!");
    cout << texto->getEnt() << endl;

    Gerador<int> *numero = new Generico<int>();

    numero->setEnt(50);
    cout << numero->getEnt() << endl;

    Gerador<float> *real = new Generico<float>();

    real->setEnt(9.85);
    cout << real->getEnt() << endl;

    Gerador<char> *letra = new Generico<char>();

    letra->setEnt('A');
    cout << letra->getEnt() << endl;

    delete texto;
    delete numero;
    delete real;
    delete letra;

    return 0;
}
