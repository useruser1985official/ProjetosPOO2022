using System;

namespace POOBanca {
    abstract class Produto {
        protected string nome;
        protected string editora;
        protected int totPaginas;
        protected int pagAtual;
        protected bool aberto;

        public void avancarPag() {
            if(this.aberto) {
                if(this.pagAtual < this.totPaginas) {
                    this.pagAtual++;

                    Console.WriteLine($"A página atual do {this.GetType().Name.ToLower()} {this.nome} é {this.pagAtual}.");
                }
                else {
                    Console.WriteLine($"Esta é a última página do {this.GetType().Name.ToLower()} {this.nome}!");
                }
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.nome} está fechado no momento!");
            }
        }

        public void voltarPag() {
            if(this.aberto) {
                if(this.pagAtual > 1) {
                    this.pagAtual--;

                    Console.WriteLine($"A página atual do {this.GetType().Name.ToLower()} {this.nome} é {this.pagAtual}.");
                }
                else {
                    Console.WriteLine($"Esta é a primeira página do {this.GetType().Name.ToLower()} {this.nome}!");
                }
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.nome} está fechado no momento!");
            }
        }

        public void folhear(int p) {
            if(this.aberto) {
                if(p < this.totPaginas && p > 1) {
                    this.pagAtual = p;

                    Console.WriteLine($"A página atual do {this.GetType().Name.ToLower()} {this.nome} é {this.pagAtual}.");
                }
                else {
                    Console.WriteLine($"Esta página do {this.GetType().Name.ToLower()} {this.nome} não existe!");
                }
            }
            else {
                Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.nome} está fechado no momento!");
            }
        }

        public void abrir() {
            if(!this.aberto) {
                this.aberto = true;
            }

            Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.nome} está aberto!");
        }
        public void fechar() {
            if(this.aberto) {
                this.aberto = false;
            }

            Console.WriteLine($"O {this.GetType().Name.ToLower()} {this.nome} está fechado!");
        }

        public virtual void apresentacao() {
            Console.WriteLine("-----------------------------------------------------------------------------------------------");
            Console.WriteLine($"Nome do {this.GetType().Name.ToLower()}: {this.nome}, da editora {this.editora}.");
            Console.WriteLine($"O produto tem {this.totPaginas} páginas e a atual é a {this.pagAtual}.");
            Console.WriteLine("Ele está aberto? {0}.", this.aberto ? "Sim" : "Não");
        }

        public Produto(string nome, string editora, int totPaginas) {
            this.nome = nome;
            this.editora = editora;
            this.totPaginas = totPaginas;
            this.pagAtual = 1;
            this.aberto = false;
        }

        public string Nome {
            get => this.nome;
            set => this.nome = value;
        }

        public string Editora {
            get => this.editora;
            set => this.editora = value;
        }

        public int TotPaginas {
            get => this.totPaginas;
            set => this.totPaginas = value;
        }

        public int PagAtual {
            get => this.pagAtual;
            set => this.pagAtual = value;
        }

        public bool Aberto {
            get => this.aberto;
            set => this.aberto = value;
        }

    }
}
