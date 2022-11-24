using System;

namespace POOBanca {
    class Revista : Produto {
        protected int numero;

        public override void apresentacao() {
            base.apresentacao();

            Console.WriteLine($"O número da revista é {this.numero}.");
        }

        public Revista(string nome, string editora, int totPaginas, int numero) : base(nome, editora, totPaginas) {
            this.numero = numero;
        }

        public int Numero {
            get => this.numero;
            set => this.numero = value;
        }
    }
}
