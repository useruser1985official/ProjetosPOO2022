#ifndef LOTERIA_H
#define LOTERIA_H
#include <vector>

using namespace std;

// Interface
class Loteria {
    public:
        virtual void fazerAposta(vector<int> aposta) = 0;
        virtual void sorteio() = 0;
};

#endif // LOTERIA_H
