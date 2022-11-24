using System;

namespace POOBanco {
    class Cofre : Guardado {
        private float total;

        public void depositar(Valor vl) {
            if(vl.Vale >= 0) {
                this.total += vl.Vale;

                Console.WriteLine($"Foi depositada no cofre a quantia de R${vl.Vale:0.00}.");
            }
            else {
                Console.WriteLine("Não é possível depositar esse valor no cofre!");
            }
        }

        public void retirar(float qt) {
            if(qt >= 0) {
                if(qt > this.total) {
                    Console.WriteLine($"Foi retirada do cofre a quantia de R${this.total:0.00}.");

                    this.total -= this.total;
                }
                else {
                    Console.WriteLine($"Foi retirada do cofre a quantia de R${qt:0.00}.");

                    this.total -= qt;
                }
            }
            else {
                Console.WriteLine("Não é possível retirar esse valor do cofre!");
            }
        }

        public void verificar() {
            Console.WriteLine($"O valor total dentro do cofre é de R${this.total:0.00}.");
        }

        public Cofre() {
            this.total = 0;
        }

        public float Total  {
            get => this.total;
            set => this.total = value;
        }
    }
}
