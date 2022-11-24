#include "Revista.h"

void Revista::apresentacao() {
    Produto::apresentacao();

    cout << "O número da revista é " << this->numero << "." << endl;
}

Revista::Revista(string nome, string editora, int totPaginas, int numero) : Produto(nome, editora, totPaginas) {
    this->numero = numero;
}

Revista::~Revista() {
    cout << "Objeto Revista Destruído com Sucesso!" << endl;
}

int Revista::getNumero() {
    return this->numero;
}

void Revista::setNumero(int numero) {
    this->numero = numero;
}
