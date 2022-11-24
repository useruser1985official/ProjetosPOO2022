#include "Jornal.h"

void Jornal::apresentacao() {
    Produto::apresentacao();

    cout << "O jornal é diário? " << (this->diario ? "Sim" : "Não") << "." << endl;
}

Jornal::Jornal(string nome, string editora, int totPaginas, bool diario) : Produto(nome, editora, totPaginas) {
    this->diario = diario;
}

Jornal::~Jornal() {
    cout << "Objeto Jornal Destruído com Sucesso!" << endl;
}

bool Jornal::getDiario() {
    return this->diario;
}

void Jornal::setDiario(bool diario) {
    this->diario = diario;
}
