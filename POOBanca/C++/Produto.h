#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <typeinfo>

using namespace std;

class Produto {
    protected:
        string nome;
        string editora;
        int totPaginas;
        int pagAtual;
        bool aberto;
    public:
        void avancarPag();
        void voltarPag();
        void folhear(int p);
        void abrir();
        void fechar();
        virtual void apresentacao();

        Produto(string nome, string editora, int totPaginas);
        virtual ~Produto() = 0;

        string getNome();
        string getEditora();
        int getTotPaginas();
        int getPagAtual();
        bool getAberto();

        void setNome(string nome);
        void setEditora(string editora);
        void setTotPaginas(int totPaginas);
        void setPagAtual(int pagAtual);
        void setAberto(bool aberto);
};

#endif // PRODUTO_H
