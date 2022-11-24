#ifndef CARRO_H
#define CARRO_H
#include "Veiculo.h"

class Carro : public Veiculo {
    public:
        Carro(string modelo, string tipo, float potencia, int ano);
        virtual ~Carro();
};

#endif // CARRO_H
