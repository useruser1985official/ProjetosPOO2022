#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <typeinfo>
#include <cctype>

using namespace std;

class Veiculo {
    protected:
        string modelo;
        string tipo;
        float potencia;
        int ano;
        bool ligado;
        bool engatado;
    public:
        void ligar();
        void desligar();
        void andar();
        void parar();
        void virarEsquerda();
        void virarDireita();
        void engatar(int m);
        virtual void engatar(char r);
        void engatar();
        void apresentacao();

        Veiculo(string modelo, string tipo, float potencia, int ano);
        virtual ~Veiculo() = 0;

        const string getModelo();
        const string getTipo();
        const float getPotencia();
        const int getAno();
        const bool getLigado();
        const bool getEngatado();

        void setModelo(string modelo);
        void setTipo(string tipo);
        void setPotencia(float potencia);
        void setAno(int ano);
        void setLigado(bool ligado);
        void setEngatado(bool engatado);
};

#endif // VEICULO_H
