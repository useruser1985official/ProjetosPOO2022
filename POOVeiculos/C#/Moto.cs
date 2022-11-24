using System;

namespace POOVeiculos {
    class Moto : Veiculo {
        public override void engatar(char r) {
            if(Char.ToUpper(r) == 'R') {
                Console.WriteLine("Moto não tem ré! Empurre a moto!");
            }
            else {
                Console.WriteLine($"Não é possível engatar essa marcha no {this.GetType().Name.ToLower()} {this.modelo}.");
            }
        }

        public Moto(string modelo, string tipo, float potencia, int ano) : base(modelo, tipo, potencia, ano) {
        
        }
    }
}
