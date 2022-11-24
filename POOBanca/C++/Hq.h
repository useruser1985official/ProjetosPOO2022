#ifndef HQ_H
#define HQ_H
#include <iostream>
#include "Revista.h"

using namespace std;

class Hq : public Revista {
    public:
        Hq(string nome, string editora, int totPaginas, int numero);
        virtual ~Hq();
};

#endif // HQ_H
