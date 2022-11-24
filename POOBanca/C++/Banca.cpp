#include "Banca.h"

// Método comum sobreposto
void Banca::apresentacao() {
    cout << "Os produtos da banca são:" << endl;

    if(this->prod1 != NULL) {
        this->prod1->apresentacao();
    }

    if(this->prod2 != NULL) {
        this->prod2->apresentacao();
    }

    if(this->prod3 != NULL) {
        this->prod3->apresentacao();
    }

    if(this->prod4 != NULL) {
        this->prod4->apresentacao();
    }

    if(this->prod5 != NULL) {
        this->prod5->apresentacao();
    }
}

// Construtores e Destrutor
Banca::Banca(Produto *prod1) {
    this->prod1 = prod1;
    this->prod2 = NULL;
    this->prod3 = NULL;
    this->prod4 = NULL;
    this->prod5 = NULL;
}

Banca::Banca(Produto *prod1, Produto *prod2) {
    this->prod1 = prod1;
    this->prod2 = prod2;
    this->prod3 = NULL;
    this->prod4 = NULL;
    this->prod5 = NULL;
}

Banca::Banca(Produto *prod1, Produto *prod2, Produto *prod3) {
    this->prod1 = prod1;
    this->prod2 = prod2;
    this->prod3 = prod3;
    this->prod4 = NULL;
    this->prod5 = NULL;
}

Banca::Banca(Produto *prod1, Produto *prod2, Produto *prod3, Produto *prod4) {
    this->prod1 = prod1;
    this->prod2 = prod2;
    this->prod3 = prod3;
    this->prod4 = prod4;
    this->prod5 = NULL;
}

Banca::Banca(Produto *prod1, Produto *prod2, Produto *prod3, Produto *prod4, Produto *prod5) {
    this->prod1 = prod1;
    this->prod2 = prod2;
    this->prod3 = prod3;
    this->prod4 = prod4;
    this->prod5 = prod5;
}

Banca::~Banca() {
    delete this->prod1;
    delete this->prod2;
    delete this->prod3;
    delete this->prod4;
    delete this->prod5;

    cout << "Objeto Banca Destruído com Sucesso!" << endl;
}

// Getters
const Produto *Banca::getProd1() {
    return this->prod1;
}

const Produto *Banca::getProd2() {
    return this->prod2;
}

const Produto *Banca::getProd3() {
    return this->prod3;
}

const Produto *Banca::getProd4() {
    return this->prod4;
}

const Produto *Banca::getProd5() {
    return this->prod5;
}

// Setters
void Banca::setProd1(Produto *prod1) {
    this->prod1 = prod1;
}

void Banca::setProd2(Produto *prod2) {
    this->prod2 = prod2;
}

void Banca::setProd3(Produto *prod3) {
    this->prod3 = prod3;
}

void Banca::setProd4(Produto *prod4) {
    this->prod4 = prod4;
}

void Banca::setProd5(Produto *prod5) {
    this->prod5 = prod5;
}
