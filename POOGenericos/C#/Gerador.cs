using System;

namespace POOGenericos {
    interface Gerador<E> {
        E getEnt();
        void setEnt(E ent);
    }
}
