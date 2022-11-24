#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include "Produto.h"

using namespace std;

class Livro : public Produto {
    public:
        Livro(string nome, string editora, int totPaginas);
        virtual ~Livro();
};

#endif // LIVRO_H
