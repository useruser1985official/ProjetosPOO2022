package poobanco;

public class POOBanco {
    public static void main(String[] args) {
        Valor moeda25Cent = new Dinheiro(0.25f, "moeda");
        Valor moeda1Real = new Dinheiro(1.00f, "moeda");
        Valor nota5Reais = new Dinheiro(5.00f, "nota");
        
        moeda25Cent.apresentacao();
        moeda1Real.apresentacao();
        nota5Reais.apresentacao();
        
        Guardado cof = new Cofre();
        
        cof.depositar(moeda25Cent);
        cof.depositar(nota5Reais);
        cof.retirar(5.00f);
        cof.verificar();
    }
}