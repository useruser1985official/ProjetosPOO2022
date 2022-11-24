#ifndef GERADOR_H
#define GERADOR_H

// Interface
template<class E> class Gerador {
    public:
       virtual E getEnt() = 0;
       virtual void setEnt(E ent) = 0;
};

#endif // GERADOR_H
