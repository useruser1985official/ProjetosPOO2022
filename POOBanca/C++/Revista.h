#ifndef REVISTA_H
#define REVISTA_H
#include <iostream>
#include "Produto.h"

using namespace std;

class Revista : public Produto {
    protected:
        int numero;
    public:
        void apresentacao() override;

        Revista(string nome, string editora, int totPaginas, int numero);
        virtual ~Revista();

        int getNumero();
        void setNumero(int numero);
};

#endif // REVISTA_H
