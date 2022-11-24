using System;

namespace POOBanca {
    class Banca : Ponto {
        private Produto prod1;
        private Produto prod2;
        private Produto prod3;
        private Produto prod4;
        private Produto prod5;

        public void apresentacao() {
            Console.WriteLine("Os produtos da banca são:");

            if(this.prod1 != null) {
                this.prod1.apresentacao();
            }

            if(this.prod2 != null) {
                this.prod2.apresentacao();
            }

            if(this.prod3 != null) {
                this.prod3.apresentacao();
            }

            if(this.prod4 != null) {
                this.prod4.apresentacao();
            }

            if(this.prod5 != null) {
                this.prod5.apresentacao();
            }
        }

        public Banca(Produto prod1) {
            this.prod1 = prod1;
            this.prod2 = null;
            this.prod3 = null;
            this.prod4 = null;
            this.prod5 = null;
        }

        public Banca(Produto prod1, Produto prod2) {
            this.prod1 = prod1;
            this.prod2 = prod2;
            this.prod3 = null;
            this.prod4 = null;
            this.prod5 = null;
        }

        public Banca(Produto prod1, Produto prod2, Produto prod3) {
            this.prod1 = prod1;
            this.prod2 = prod2;
            this.prod3 = prod3;
            this.prod4 = null;
            this.prod5 = null;
        }

        public Banca(Produto prod1, Produto prod2, Produto prod3, Produto prod4) {
            this.prod1 = prod1;
            this.prod2 = prod2;
            this.prod3 = prod3;
            this.prod4 = prod4;
            this.prod5 = null;
        }

        public Banca(Produto prod1, Produto prod2, Produto prod3, Produto prod4, Produto prod5) {
            this.prod1 = prod1;
            this.prod2 = prod2;
            this.prod3 = prod3;
            this.prod4 = prod4;
            this.prod5 = prod5;
        }

        public Produto Prod1  {
            get => this.prod1;
            set => this.prod1 = value;
        }

        public Produto Prod2  {
            get => this.prod2;
            set => this.prod2 = value;
        }

        public Produto Prod3  {
            get => this.prod3;
            set => this.prod3 = value;
        }

        public Produto Prod4  {
            get => this.prod4;
            set => this.prod4 = value;
        }

        public Produto Prod5  {
            get => this.prod5;
            set => this.prod5 = value;
        }
    }
}
