using System;

namespace POOBanca {
    class Jornal : Produto {
        protected bool diario;

        public override void apresentacao() {
            base.apresentacao();

            Console.WriteLine("O jornal é diário? {0}.", this.diario ? "Sim" : "Não");
        }

        public Jornal(string nome, string editora, int totPaginas, bool diario) : base(nome, editora, totPaginas) {
            this.diario = diario;
        }

        public bool Diario {
            get => this.diario;
            set => this.diario = value;
        }
    }
}
