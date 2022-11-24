#ifndef GUARDADO_H
#define GUARDADO_H
#include "Dinheiro.h"

// Interface
class Guardado {
    public:
        virtual void depositar(Valor *vl) = 0;
        virtual void retirar(float qt) = 0;
        virtual void verificar() = 0;
};

#endif // GUARDADO_H
