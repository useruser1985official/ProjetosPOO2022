#include "Dinheiro.h"

void Dinheiro::apresentacao() {
    printf("A %s tem o valor de R$%.2f.\n", this->getTipo().c_str(), this->getVale());
}

Dinheiro::Dinheiro(float vale, string tipo) : Valor(vale, tipo) {

}

Dinheiro::~Dinheiro() {
    cout << "Objeto Dinheiro Destruído com Sucesso!" << endl;
}
