#ifndef GENERICO_H
#define GENERICO_H
#include "Gerador.h"

template<class E> class Generico : public Gerador<E> {
    private:
        E ent;
    public:
        E getEnt() override;
        void setEnt(E ent) override;
};

template<class E> E Generico<E>::getEnt() {
    return this->ent;
}

template<class E> void Generico<E>::setEnt(E ent) {
    this->ent = ent;
}

#endif // GENERICO_H
