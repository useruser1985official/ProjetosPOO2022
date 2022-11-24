using System;

namespace POOGenericos {
    class Program {
        static void Main(string[] args) {
            Gerador<string> texto = new Generico<string>();

            texto.setEnt("Exemplo de Texto!");
            Console.WriteLine(texto.getEnt());

            Gerador<int> numero = new Generico<int>();

            numero.setEnt(50);
            Console.WriteLine(numero.getEnt());

            Gerador<float> real = new Generico<float>();
            
            real.setEnt(9.85f);
            Console.WriteLine(real.getEnt());

            Gerador<char> letra = new Generico<char>();

            letra.setEnt('A');
            Console.WriteLine(letra.getEnt());

            Console.ReadKey();
        }
    }
}
