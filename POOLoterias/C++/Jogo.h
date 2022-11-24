#ifndef JOGO_H
#define JOGO_H
#include <iostream>
#include <vector>
#include <algorithm>
#include "Loteria.h"
#include "Random.h"

using namespace std;

class Jogo : public Loteria {
    private:
        int quantNum;
        int quantResul;
        int miniCart;
        int maxiCart;
        vector<int> faixas;
        vector<int> aposta;
        bool invalida;
    public:
        void fazerAposta(vector<int> aposta) override;
        void sorteio() override;

        Jogo(int quantNum, int quantResul, int miniCart, int maxiCart, vector<int> faixas);
        virtual ~Jogo();

        const int getQuantNum();
        const int getQuantResul();
        const int getMiniCart();
        const int getMaxiCart();
        const vector<int> getFaixas();
        const vector<int> getAposta();
        const bool getInvalida();

        void setQuantNum(int quantNum);
        void setQuantResul(int quantResul);
        void setMiniCart(int miniCart);
        void setMaxiCart(int maxiCart);
        void setFaixas(vector<int> faixas);
        void setAposta(vector<int> aposta);
        void setInvalida(bool invalida);
};

#endif // JOGO_H
