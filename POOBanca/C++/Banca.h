#ifndef BANCA_H
#define BANCA_H
#include <iostream>
#include <cstddef>
#include "Produto.h"
#include "Ponto.h"

using namespace std;

class Banca : public Ponto {
    private:
        Produto *prod1;
        Produto *prod2;
        Produto *prod3;
        Produto *prod4;
        Produto *prod5;
    public:
        void apresentacao() override;

        Banca(Produto *prod1);
        Banca(Produto *prod1, Produto *prod2);
        Banca(Produto *prod1, Produto *prod2, Produto *prod3);
        Banca(Produto *prod1, Produto *prod2, Produto *prod3, Produto *prod4);
        Banca(Produto *prod1, Produto *prod2, Produto *prod3, Produto *prod4, Produto *prod5);

        virtual ~Banca();

        const Produto *getProd1();
        const Produto *getProd2();
        const Produto *getProd3();
        const Produto *getProd4();
        const Produto *getProd5();

        void setProd1(Produto *prod1);
        void setProd2(Produto *prod2);
        void setProd3(Produto *prod3);
        void setProd4(Produto *prod4);
        void setProd5(Produto *prod5);
};

#endif // BANCA_H
