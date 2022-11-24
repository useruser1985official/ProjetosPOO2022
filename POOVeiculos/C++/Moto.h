#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <cctype>
#include <typeinfo>
#include "Veiculo.h"

using namespace std;

class Moto : public Veiculo {
    public:
        void engatar(char r) override;

        Moto(string modelo, string tipo, float potencia, int nao);
        virtual ~Moto();
};

#endif // MOTO_H
