package poocalculos;

import java.util.Scanner;

public class POOCalculos {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in, "CP1252");
        int num;
        
        System.out.print("Digite um número inteiro: ");
        num = entrada.nextInt();
             
        try {
            System.out.println("Quadrado de " + num + ": " + Calculos.quadrado(num));
            System.out.println("Cubo de " + num + ": " + Calculos.cubo(num));
            System.out.println("Fatorial de " + num + ": " + Calculos.fatorial(num));
            System.out.println("Fibonacci de " + num + ": " + Calculos.fibonacci(num));
        }
        catch(Exception ex) {
            System.err.println("ERRO: " + ex.getMessage());
        }
    } 
}