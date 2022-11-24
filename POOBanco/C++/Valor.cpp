#include "Valor.h"

// Construtor e Destrutor
Valor::Valor(float vale, string tipo) {
    this->vale = vale;
    this->tipo = tipo;
}

Valor::~Valor() {
    cout << "Objeto Valor Destruído com Sucesso!" << endl;
}

// Getters
const float Valor::getVale() {
    return this->vale;
}

const string Valor::getTipo() {
    return this->tipo;
}

// Setters
void Valor::setVale(float vale) {
    this->vale = vale;
}

void Valor::setTipo(string tipo) {
    this->tipo = tipo;
}
