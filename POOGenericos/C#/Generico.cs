using System;

namespace POOGenericos {
    class Generico<E> : Gerador<E> {
        private E ent;
        
        public E getEnt() {
            return this.ent;
        }

        public void setEnt(E ent) {
            this.ent = ent;
        }
    }
}
