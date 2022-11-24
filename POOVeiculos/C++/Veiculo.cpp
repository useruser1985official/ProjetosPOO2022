#include "Veiculo.h"

// Métodos comuns
void Veiculo::ligar() {
    if(!this->ligado) {
        this->ligado = true;

        cout << "O " << typeid(*this).name() << " " << this->modelo << " está sendo ligado!" << endl;
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->modelo << " já está ligado!" << endl;
    }
}

void Veiculo::desligar() {
    if(this->ligado) {
        this->ligado = false;

        cout << "O " << typeid(*this).name() << " " << this->modelo << " está sendo desligado!" << endl;
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->modelo << " já está desligado!" << endl;
    }
}

void Veiculo::andar() {
    if(this->ligado) {
        if(this->engatado) {
            cout << "O " << typeid(*this).name() << " " << this->modelo << " está andando!" << endl;
        }
        else {
            cout << "Engate a marcha do " << typeid(*this).name() << " " << this->modelo << " pra andar com ele!" << endl;
        }
    }
    else {
        cout << "Ligue o " << typeid(*this).name() << " " << this->modelo << " para andar com ele!" << endl;
    }
}

void Veiculo::parar() {
    if(this->ligado) {
        cout << "O " << typeid(*this).name() << " " << this->modelo << " está sendo parado!" << endl;
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->modelo << " está desligado, portanto, está parado!" << endl;
    }
}

void Veiculo::virarEsquerda() {
    cout << "O " << typeid(*this).name() << " " << this->modelo << " está virando à esquerda!" << endl;
}

void Veiculo::virarDireita() {
    cout << "O " << typeid(*this).name() << " " << this->modelo << " está virando à direita!" << endl;
}

void Veiculo::engatar(int m) {
    if(m >= 1 && m <= 5) {
        this->engatado = true;

        cout << m << "ª marcha do " << typeid(*this).name() << " " << this->modelo << " engatada!" << endl;
    }
    else {
        cout << "Não é possível engatar essa marcha no " << typeid(*this).name() << " " << this->modelo << "." << endl;
    }
}

void Veiculo::engatar(char r) {
    if((char)toupper(r) == 'R') {
        this->engatado = true;

        cout << "Marcha à ré do " << typeid(*this).name() << " " << this->modelo << " engatada!" << endl;
    }
    else {
        cout << "Não é possível engatar essa marcha no " << typeid(*this).name() << " " << this->modelo << "." << endl;
    }
}

void Veiculo::engatar() {
    if(this->engatado) {
        this->engatado = false;

        cout << typeid(*this).name() << " " << this->modelo << " desengatado!" << endl;
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->modelo << " já está desengatado!" << endl;
    }
}

void Veiculo::apresentacao() {
    cout << "O " << typeid(*this).name() << " é do modelo " << this->modelo << " e do tipo " << this->tipo << "." << endl;
    cout << "A potência dele é de " << this->potencia << " e o ano é de " << this->ano << "." << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
}

// Construtor e Destrutor
Veiculo::Veiculo(string modelo, string tipo, float potencia, int ano) {
    this->modelo = modelo;
    this->tipo = tipo;
    this->potencia = potencia;
    this->ano = ano;
    this->ligado = false;
    this->engatado = false;
}

Veiculo::~Veiculo() {
    cout << "Objeto Veículo Destruído com Sucesso!" << endl;
}

// Getters
const string Veiculo::getModelo() {
    return this->modelo;
}

const string Veiculo::getTipo() {
    return this->tipo;
}

const float Veiculo::getPotencia() {
    return this->potencia;
}

const int Veiculo::getAno() {
    return this->ano;
}

const bool Veiculo::getLigado() {
    return this->ligado;
}

const bool Veiculo::getEngatado() {
    return this->engatado;
}

// Setters
void Veiculo::setModelo(string modelo) {
    this->modelo = modelo;
}

void Veiculo::setTipo(string tipo) {
    this->tipo = tipo;
}

void Veiculo::setPotencia(float potencia) {
    this->potencia = potencia;
}

void Veiculo::setAno(int ano) {
    this->ano = ano;
}

void Veiculo::setLigado(bool ligado) {
    this->ligado = ligado;
}

void Veiculo::setEngatado(bool engatado) {
    this->engatado = engatado;
}
