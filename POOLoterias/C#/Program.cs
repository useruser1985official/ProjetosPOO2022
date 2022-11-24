using System;
using System.Collections.Generic;

namespace POOLoterias {
    class Program {
        static void Main(string[] args) {
            Action linha = () => Console.WriteLine("-----------------------------------------------------------------------------------");
            
            List<int> faiLoto = new List<int>() {11, 12, 13, 14, 15};
            Loteria lotofacil = new Jogo(15, 15, 01, 25, faiLoto);
            List<int> apLoto = new List<int>() {1, 3, 4, 6, 8, 9, 10, 11, 12, 15, 17, 18, 21, 23, 25};

            lotofacil.fazerAposta(apLoto);
            lotofacil.sorteio();

            linha();

            List<int> faiQui = new List<int>() {2, 3, 4, 5};
            Loteria quina = new Jogo(5, 5, 1, 80, faiQui);
            List<int> apQui = new List<int>() {5, 20, 23, 53, 80};

            quina.fazerAposta(apQui);
            quina.sorteio();

            linha();

            List<int> faiSe = new List<int>() {4, 5, 6};
            Loteria mega = new Jogo(6, 6, 1, 60, faiSe);
            List<int> apSe = new List<int>() {10, 24, 30, 36, 51, 53};

            mega.fazerAposta(apSe);
            mega.sorteio();

            Console.ReadKey();
        }
    }
}
