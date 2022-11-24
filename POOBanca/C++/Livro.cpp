#include "Livro.h"

Livro::Livro(string nome, string editora, int totPaginas) : Produto(nome, editora, totPaginas) {

}

Livro::~Livro() {
    cout << "Objeto Livro Destruído com Sucesso!" << endl;
}
