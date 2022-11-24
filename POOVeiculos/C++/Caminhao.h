#ifndef CAMINHAO_H
#define CAMINHAO_H
#include "Veiculo.h"

class Caminhao : public Veiculo {
    public:
        Caminhao(string modelo, string tipo, float potencia, int ano);
        virtual ~Caminhao();
};

#endif // CAMINHAO_H
