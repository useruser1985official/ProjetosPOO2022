#include "Produto.h"

// Métodos comuns
void Produto::avancarPag() {
    if(this->aberto) {
        if(this->pagAtual < this->totPaginas) {
            this->pagAtual++;

            cout << "A página atual do " << typeid(*this).name() << " " << this->nome << " é " << this->pagAtual << "." << endl;
        }
        else {
            cout << "Esta é a última página do " << typeid(*this).name() << " " << this->nome << "!" << endl;
        }
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->nome << " está fechado no momento!" << endl;
    }
}

void Produto::voltarPag() {
    if(this->aberto) {
        if(this->pagAtual > 1) {
            this->pagAtual--;

            cout << "A página atual do " << typeid(*this).name() << " " << this->nome << " é " << this->pagAtual << "." << endl;
        }
        else {
            cout << "Esta é a primeira página do " << typeid(*this).name() << " " << this->nome << "!" << endl;
        }
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->nome << " está fechado no momento!" << endl;
    }
}

void Produto::folhear(int p) {
    if(this->aberto) {
        if(p < this->totPaginas && p > 1) {
            this->pagAtual = p;

            cout << "A página atual do " << typeid(*this).name() << " " << this->nome << " é " << this->pagAtual << "." << endl;
        }
        else {
            cout << "Esta página do " << typeid(*this).name() << " " << this->nome << " não existe!" << endl;
        }
    }
    else {
        cout << "O " << typeid(*this).name() << " " << this->nome << " está fechado no momento!" << endl;
    }
}

void Produto::abrir() {
    if(!this->aberto) {
        this->aberto = true;
    }

    cout << "O " << typeid(*this).name() << " " << this->nome << " está aberto!" << endl;
}

void Produto::fechar() {
    if(this->aberto) {
        this->aberto = false;
    }

    cout << "O " << typeid(*this).name() << " " << this->nome << " está fechado!" << endl;
}

void Produto::apresentacao() {
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Nome do " << typeid(*this).name() << ": " << this->nome << ", da editora " << this->editora << "." << endl;
    cout << "O produto tem " << this->totPaginas << " páginas e a atual é a " << this->pagAtual << "." << endl;
    cout << "Ele está aberto? " << (this->aberto ? "Sim" : "Não") << "." << endl;
}

// Construtor e Destrutor
Produto::Produto(string nome, string editora, int totPaginas) {
    this->nome = nome;
    this->editora = editora;
    this->totPaginas = totPaginas;
    this->pagAtual = 1;
    this->aberto = false;
}

Produto::~Produto() {
    cout << "Objeto Produto Destruído com Sucesso!" << endl;
}

// Getters
string Produto::getNome() {
    return this->nome;
}

string Produto::getEditora() {
    return this->editora;
}

int Produto::getTotPaginas() {
    return this->totPaginas;
}

int Produto::getPagAtual() {
    return this->pagAtual;
}

bool Produto::getAberto() {
    return this->aberto;
}

// Setters
void Produto::setNome(string nome) {
    this->nome = nome;
}

void Produto::setEditora(string editora) {
    this->editora = editora;
}

void Produto::setTotPaginas(int totPaginas) {
    this->totPaginas = totPaginas;
}

void Produto::setPagAtual(int pagAtual) {
    this->pagAtual = pagAtual;
}

void Produto::setAberto(bool aberto) {
    this->aberto = aberto;
}
