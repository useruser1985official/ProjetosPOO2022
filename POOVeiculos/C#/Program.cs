using System;

namespace POOVeiculos {
    class Program {
        static void Main(string[] args) {
            Veiculo fusca = new Carro("Fusca", "LS", 1.6f, 1994);

            fusca.ligar();
            fusca.engatar(1);
            fusca.andar();
            fusca.engatar(2);
            fusca.virarDireita();
            fusca.engatar(3);
            fusca.parar();
            fusca.engatar();
            fusca.engatar(1);
            fusca.andar();
            fusca.engatar(2);
            fusca.engatar(3);
            fusca.parar();
            fusca.engatar('R');
            fusca.andar();
            fusca.parar();
            fusca.engatar();
            fusca.desligar();
            fusca.apresentacao();

            Veiculo f750 = new Moto("F 750", "GS", 0.75f, 2022);

            f750.ligar();
            f750.engatar(1);
            f750.andar();
            f750.engatar(2);
            f750.parar();
            f750.engatar();
            f750.desligar();
            f750.apresentacao();

            Veiculo axor = new Caminhao("Axor", "2544", 12.0f, 2022);

            axor.ligar();
            axor.engatar('R');
            axor.andar();
            axor.virarDireita();
            axor.parar();
            axor.engatar(1);
            axor.andar();
            axor.engatar(2);
            axor.engatar(3);
            axor.engatar(4);
            axor.engatar(5);
            axor.parar();
            axor.engatar();
            axor.desligar();
            axor.apresentacao();

            Console.ReadKey();
        }
    }
}
