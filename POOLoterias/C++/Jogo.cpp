#include "Jogo.h"

// Métodos Comuns:
void Jogo::fazerAposta(vector<int> aposta) {
    this->aposta = aposta;

    if(this->aposta[this->aposta.size() - 1] <= this->maxiCart && this->quantNum == this->aposta.size()) {
        cout << "Os números apostados são: ";

        for(int i = 0; i < this->aposta.size() - 1; i++) {
            cout << this->aposta[i] << " ";
        }

        cout << this->aposta[this->aposta.size() - 1] << "." << endl;
    }
    else {
        cout << "Aposta inválida!" << endl;
        this->invalida = true;
    }
}

void Jogo::sorteio() {
    if(!this->invalida) {
        int num;
        vector<int> sorte;
        int cont = 0;
        Random ale;

        while(cont < this->quantResul) {
            num = ale.nextInt(this->miniCart, this->maxiCart);

            if(find(sorte.begin(), sorte.end(), num) == sorte.end()) {
                sorte.push_back(num);
                cont++;
            }
        }

        sort(sorte.begin(), sorte.end());

        cout << "Números Sorteados: ";

        for(int i = 0; i < this->quantResul - 1; i++) {
            cout << sorte[i] << " ";
        }

        cout << sorte[this->quantResul - 1] << "." << endl;

        int acertos = 0;
        vector<int> numCert;
        cont = 0;

        while(cont < this->quantResul) {
            if(find(aposta.begin(), aposta.end(), sorte[cont]) != aposta.end()) {
                numCert.push_back(sorte[cont]);
                acertos++;
            }
            cont++;
        }

        if(!numCert.empty()) {
            cout << "Você acertou " << acertos << " números que foram: ";

            for(int i = 0; i < numCert.size() - 1; i++) {
                cout << numCert[i] << " ";
            }

            cout << numCert[numCert.size() - 1];

            if(find(this->faixas.begin(), this->faixas.end(), acertos) != this->faixas.end()) {
                cout << " e acertou a faixa de " << acertos << " pontos!" << endl;
            }
            else {
                cout << "!" << endl;
            }
        }
        else {
            cout << "Você não acertou nenhum número!" << endl;
        }
    }
    else {
        cout << "Sorteio inválido!" << endl;
    }
}

// Construtor e Destrutor:
Jogo::Jogo(int quantNum, int quantResul, int miniCart, int maxiCart, vector<int> faixas) {
    this->quantNum = quantNum;
    this->quantResul = quantResul;
    this->miniCart = miniCart;
    this->maxiCart = maxiCart;
    this->faixas = faixas;
    this->invalida = false;
}

Jogo::~Jogo() {
    cout << "Objeto Jogo Destruído com Sucesso!" << endl;
}

// Getters
const int Jogo::getQuantNum() {
    return this->quantNum;
}

const int Jogo::getQuantResul() {
    return this->quantResul;
}

const int Jogo::getMiniCart() {
    return this->miniCart;
}

const int Jogo::getMaxiCart() {
    return this->maxiCart;
}

const vector<int> Jogo::getFaixas() {
    return this->faixas;
}

const vector<int> Jogo::getAposta() {
    return this->aposta;
}

const bool Jogo::getInvalida() {
    return this->invalida;
}

// Setters
void Jogo::setQuantNum(int quantNum) {
    this->quantNum = quantNum;
}

void Jogo::setQuantResul(int quantResul) {
    this->quantResul = quantResul;
}

void Jogo::setMiniCart(int miniCart) {
    this->miniCart = miniCart;
}

void Jogo::setMaxiCart(int maxiCart) {
    this->maxiCart = maxiCart;
}

void Jogo::setFaixas(vector<int> faixas) {
    this->faixas = faixas;
}

void Jogo::setAposta(vector<int> aposta) {
    this->aposta = aposta;
}

void Jogo::setInvalida(bool invalida) {
    this->invalida = invalida;
}
