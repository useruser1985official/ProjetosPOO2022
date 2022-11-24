#include "Hq.h"

Hq::Hq(string nome, string editora, int totPaginas, int numero) : Revista(nome, editora, totPaginas, numero) {

}

Hq::~Hq() {
    cout << "Objeto Hq Destruído com Sucesso!" << endl;
}
