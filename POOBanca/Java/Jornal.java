package poobanca;

public class Jornal extends Produto {
    protected boolean diario;
    
    @Override
    public void apresentacao() {
        super.apresentacao();
        
        System.out.println("O jornal é diário? " + (this.diario ? "Sim" : "Não") + ".");
    }
    
    // Construtor
    public Jornal(String nome, String editora, int totPaginas, boolean diario) {
        super(nome, editora, totPaginas);
        
        this.diario = diario;
    }
    
    // Getter e Setter
    public boolean getDiario() {
        return this.diario;
    }
    
    public void setDiario(boolean diario) {
        this.diario = diario;
    }
}
