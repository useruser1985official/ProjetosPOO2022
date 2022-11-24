using System;

namespace POOVeiculos {
    abstract class Veiculo {
        protected string modelo;
        protected string tipo;
        protected float potencia;
        protected int ano;
        protected bool ligado;
        protected bool engatado;

        public void ligar() {
            if(!this.ligado) {
                this.ligado = true;

                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está sendo ligado!");
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} já está ligado!");
            }
        }
        public void desligar() {
            if(this.ligado) {
                this.ligado = false;

                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está sendo desligado!");
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} já está desligado!");
            }
        }

        public void andar() {
            if(this.ligado) {
                if(this.engatado) {
                    Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está andando!");
                }
                else {
                    Console.WriteLine($"Engate a marcha do {this.GetType().Name.ToLower()} {this.modelo} pra andar com ele!");
                }
            }
            else {
                Console.WriteLine($"Ligue o {this.GetType().Name.ToLower()} {this.modelo} para andar com ele!");
            }
        }
        public void parar() {
            if(this.ligado) {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está sendo parado!");
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está desligado, portanto, está parado!");
            }
        }

        public void virarEsquerda() {
            Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está virando à esquerda!");
        }

        public void virarDireita() {
            Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} está virando à direita!");
        }

        public void engatar(int m) {
            if(m >= 1 && m <= 5) {
                this.engatado = true;

                Console.WriteLine($"{m}ª marcha do {this.GetType().Name.ToLower()} {this.modelo} engatada!");
            }
            else {
                Console.WriteLine($"Não é possível engatar essa marcha no {this.GetType().Name.ToLower()} {this.modelo}.");
            }
        }
        public virtual void engatar(char r) {
            if(Char.ToUpper(r) == 'R') {
                this.engatado = true;

                Console.WriteLine($"Marcha à ré do {this.GetType().Name.ToLower()} {this.modelo} engatada!");
            }
            else {
                Console.WriteLine($"Não é possível engatar essa marcha no {this.GetType().Name.ToLower()} {this.modelo}.");
            }
        }
        public void engatar() {
            if(this.engatado) {
                this.engatado = false;

                Console.WriteLine($"{this.GetType().Name} {this.modelo} desengatado!");
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.modelo} já está desengatado!");
            }
        }

        public void apresentacao() {
            Console.WriteLine($"O {this.GetType().Name.ToLower()} é do modelo {this.modelo} e do tipo {this.tipo}.");
            Console.WriteLine($"A potência dele é de {this.potencia:0.0} e o ano é de {this.ano}.");
            Console.WriteLine("--------------------------------------------------------------------------------------");
        }


        public Veiculo(string modelo, string tipo, float potencia, int ano) {
            this.modelo = modelo;
            this.tipo = tipo;
            this.potencia = potencia;
            this.ano = ano;
            this.ligado = false;
            this.engatado = false;
        }

        public string Modelo {
            get => this.modelo;
            set => this.modelo = value;
        }

        public string Tipo {
            get => this.tipo;
            set => this.tipo = value;
        }

        public float Potencia {
            get => this.potencia;
            set => this.potencia = value;
        }

        public int Ano {
            get => this.ano;
            set => this.ano = value;
        }

        public bool Ligado {
            get => this.ligado;
            set => this.ligado = value;
        }

        public bool Engatado {
            get => this.engatado;
            set => this.engatado = value;
        }
    }
}
