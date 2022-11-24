using System;
using System.Collections.Generic;
using System.Linq;

namespace POOLoterias {
    class Jogo : Loteria {
        private int quantNum;
        private int quantResul;
        private int miniCart;
        private int maxiCart;
        private List<int> faixas;
        private List<int> aposta;
        private bool invalida;

        public void fazerAposta(List<int> aposta) {
            this.aposta = aposta;

            if(this.aposta[this.aposta.Count - 1] <= this.maxiCart && this.quantNum == this.aposta.Count) {
                Console.Write("Os números apostados são: ");

                for(int i = 0; i < this.aposta.Count - 1; i++) {
                    Console.Write($"{this.aposta[i]} ");
                }

                Console.WriteLine($"{this.aposta[this.aposta.Count - 1]}.");
            }
            else {
                Console.WriteLine("Aposta inválida!");
                this.invalida = true;
            }
        }

        public void sorteio() {
            if(!this.invalida) {
                int num;
                List<int> sorte = new List<int>();
                int cont = 0;
                Random ale = new Random();

                while(cont < this.quantResul) {
                    num = ale.Next(this.miniCart, this.maxiCart + 1);

                    if(!sorte.Contains(num)) {
                        sorte.Add(num);
                        cont++;
                    }
                }

                sorte.Sort();

                Console.Write("Números Sorteados: ");

                for(int i = 0; i < this.quantResul - 1; i++) {
                    Console.Write($"{sorte[i]} ");
                }

                Console.WriteLine($"{sorte[this.quantResul - 1]}.");

                int acertos = 0;
                List<int> numCert = new List<int>();
                cont = 0;

                while(cont < this.quantResul) {
                    if(this.aposta.Contains(sorte[cont])) {
                        numCert.Add(sorte[cont]);
                        acertos++;
                    }
                    cont++;
                }

                if(numCert.Any()) {
                    Console.Write($"Você acertou {acertos} números que foram: ");

                    for(int i = 0; i < numCert.Count - 1; i++) {
                        Console.Write($"{numCert[i]} ");
                    }

                    Console.Write(numCert[numCert.Count - 1]);

                    if(this.faixas.Contains(acertos)) {
                        Console.WriteLine($" e acertou a faixa de {acertos} pontos!");
                    }
                    else {
                        Console.WriteLine("!");
                    }
                }
                else {
                    Console.WriteLine("Você não acertou nenhum número!");
                }
            }
            else {
                Console.WriteLine("Sorteio inválido!");
            }
        }

        public Jogo(int quantNum, int quantResul, int miniCart, int maxiCart, List<int> faixas) {
            this.quantNum = quantNum;
            this.quantResul = quantResul;
            this.miniCart = miniCart;
            this.maxiCart = maxiCart;
            this.faixas = faixas;
            this.invalida = false;
        }

        public int QuantNum {
            get => this.quantNum;
            set => this.quantNum = value;
        }

        public int QuantResul {
            get => this.quantResul;
            set => this.quantResul = value;
        }

        public int MiniCart {
            get => this.miniCart;
            set => this.miniCart = value;
        }

        public int MaxiCart {
            get => this.maxiCart;
            set => this.maxiCart = value;
        }

        public List<int> Faixas {
            get => this.faixas;
            set => this.faixas = value;
        }

        public List<int> Aposta {
            get => this.aposta;
            set => this.aposta = value;
        }

        public bool Invalida {
            get => this.invalida;
            set => this.invalida = value;
        }
    }
}
