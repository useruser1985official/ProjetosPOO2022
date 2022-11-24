using System;

namespace POOCalculos {
    class Calculos {
        public static int quadrado(int num) {
            if(num <= 0) {
                throw new Exception("Insira um valor maior que zero!");
            }

            return num * num;
        }

        public static int cubo(int num) {
            if(num <= 0) {
                throw new Exception("Insira um valor maior que zero!");
            }

            return num * num * num;
        }

        public static string fatorial(int num) {
            if(num <= 0) {
                throw new Exception("Insira um valor maior que zero!");
            }

            int fat = 1;
            string saida = "";

            while(num >= 1) {
                fat *= num;

                saida += num;

                saida += num > 1 ? " x " : " = ";

                num--;
            }

            saida += fat;

            return saida;
        }

        public static string fibonacci(int num) {
            if(num <= 0) {
                throw new Exception("Insira um valor maior que zero!");
            }

            int t1 = 0;
            int t2 = 1;
            int t3 = 0;
            int cont = 3;

            string said = t1 + " → " + t2;

            while(cont <= num) {
                t3 = t1 + t2;
                said += " → " + t3;
                t1 = t2;
                t2 = t3;
                cont++;
            }

            said += " → FIM";

            return said;
        }
    }
}
