#ifndef VALOR_H
#define VALOR_H
#include <iostream>

using namespace std;

class Valor {
    protected:
        float vale;
        string tipo;
    public:
        virtual void apresentacao() = 0;

        Valor(float vale, string tipo);
        virtual ~Valor();

        const float getVale();
        const string getTipo();

        void setVale(float vale);
        void setTipo(string tipo);
};

#endif // VALOR_H
