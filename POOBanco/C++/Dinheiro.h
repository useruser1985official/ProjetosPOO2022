#ifndef DINHEIRO_H
#define DINHEIRO_H
#include <iostream>
#include "Valor.h"

using namespace std;

class Dinheiro : public Valor {
    public:
        void apresentacao() override;

        Dinheiro(float vale, string tipo);
        virtual ~Dinheiro();
};

#endif // DINHEIRO_H
