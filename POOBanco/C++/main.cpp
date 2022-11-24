#include <iostream>
#include <cstdlib>
#include <clocale>
#include "Cofre.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    Valor *moeda25Cent = new Dinheiro(0.25, "moeda");
    Valor *moeda1Real = new Dinheiro(1.00, "moeda");
    Valor *nota5Reais = new Dinheiro(5.00, "nota");

    moeda25Cent->apresentacao();
    moeda1Real->apresentacao();
    nota5Reais->apresentacao();

    Guardado *cof = new Cofre();

    cof->depositar(moeda25Cent);
    cof->depositar(nota5Reais);
    cof->retirar(5.00);
    cof->verificar();

    delete moeda25Cent;
    delete moeda1Real;
    delete nota5Reais;

    return 0;
}
