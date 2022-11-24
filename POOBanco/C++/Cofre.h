#ifndef COFRE_H
#define COFRE_H
#include <iostream>
#include "Guardado.h"

class Cofre : public Guardado {
    private:
        float total;
    public:
        void depositar(Valor *vl) override;
        void retirar(float qt) override;
        void verificar() override;

        Cofre();
        virtual ~Cofre();

        const float getTotal();
        void setTotal(float total);
};

#endif // COFRE_H
