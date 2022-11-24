using System;

namespace POOBanco {
    interface Guardado {
        void depositar(Valor vl);
        void retirar(float qt);
        void verificar();
    }
}
