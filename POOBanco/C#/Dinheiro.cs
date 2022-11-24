using System;

namespace POOBanco {
    class Dinheiro : Valor {
        public override void apresentacao() {
            Console.WriteLine($"A {this.Tipo} tem o valor de {this.Vale:0.00}.");
        }

        public Dinheiro(float vale, string tipo) : base(vale, tipo) {

        }
    }
}
