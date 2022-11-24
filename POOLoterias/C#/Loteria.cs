using System;
using System.Collections.Generic;

namespace POOLoterias {
    interface Loteria {
        void fazerAposta(List<int> aposta);
        void sorteio();
    }
}
