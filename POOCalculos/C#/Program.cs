using System;

namespace POOCalculos {
    class Program {
        static void Main(string[] args) {
            int num;
            
            Console.Write("Digite um número inteiro: ");
            num = int.Parse(Console.ReadLine());

            try {
                Console.WriteLine($"Quadrado de {num}: {Calculos.quadrado(num)}.");
                Console.WriteLine($"Cubo de {num}: {Calculos.cubo(num)}");
                Console.WriteLine($"Fatorial de {num}: {Calculos.fatorial(num)}");
                Console.WriteLine($"Fibonacci de {num}: {Calculos.fibonacci(num)}");
            }
            catch(Exception ex) {
                Console.WriteLine($"ERRO: {ex.Message}");
            }

            Console.ReadKey();
        }
    }
}
