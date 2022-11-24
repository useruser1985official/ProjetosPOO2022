package poobanca;

public class Revista extends Produto {
    protected int numero;
    
    @Override
    public void apresentacao() {
        super.apresentacao();
        
        System.out.println("O número da revista é " + this.numero + ".");
    }
    
    // Construtor
    public Revista(String nome, String editora, int totPaginas, int numero) {
        super(nome, editora, totPaginas);
        
        this.numero = numero;
    }
    
    // Getters e Setters
    public int getNumero() {
        return this.numero;
    }
    
    public void setNumero(int numero) {
        this.numero = numero;
    }
}
