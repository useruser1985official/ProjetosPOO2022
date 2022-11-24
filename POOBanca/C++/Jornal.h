#ifndef JORNAL_H
#define JORNAL_H
#include <iostream>
#include "Produto.h"

using namespace std;

class Jornal : public Produto {
    protected:
        bool diario;
    public:
        void apresentacao() override;

        Jornal(string nome, string editora, int totPaginas, bool diario);
        virtual ~Jornal();

        bool getDiario();
        void setDiario(bool diario);
};

#endif // JORNAL_H
