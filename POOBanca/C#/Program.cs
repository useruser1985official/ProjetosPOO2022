using System;

namespace POOBanca {
    class Program {
        static void Main(string[] args) {
            Produto veja = new Revista("Veja", "Abril", 200, 2564);
            Produto caras = new Revista("Caras", "Abril", 250, 1948);

            veja.abrir();
            veja.avancarPag();
            veja.voltarPag();
            veja.folhear(50);
            // veja.apresentacao();

            Produto superman = new Hq("Superman", "Panini", 96, 47);
            Produto batman = new Hq("Batman", "Panini", 96, 47);
            Produto liga = new Hq("Liga da Justiça", "Panini", 96, 47);

            // superman.apresentacao();
            // batman.apresentacao();

            Produto dgabc = new Jornal("Diário do Grande ABC", "DGABC", 300, true);
            Produto folha = new Jornal("Folha de São Paulo", "Grupo Folha", 400, true);

            // dgabc.apresentacao();

            Produto inic = new Livro("C# para Iniciantes", "Tecno", 250);
            Produto objet = new Livro("Orientação a Objetos em C#", "Tecno", 300);
            Produto avanc = new Livro("C# Avançado", "Tecno", 400);

            // inic.apresentacao();
            // objet.apresentacao();

            Console.WriteLine("-----------------------------------------------------------------------------------------------");

            Ponto banc = new Banca(veja, superman, dgabc, folha, objet);

            banc.apresentacao();

            Console.ReadKey();
        }
    }
}
