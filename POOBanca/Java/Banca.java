package poobanca;

public class Banca implements Ponto {
    private Produto prod1;
    private Produto prod2;
    private Produto prod3;
    private Produto prod4;
    private Produto prod5;
    
    @Override
    public void apresentacao() {
        System.out.println("Os produtos da banca são:");
        
        // Ifs independentes
        if(this.prod1 != null) {
            this.prod1.apresentacao();
        }
        
        if(this.prod2 != null) {
            this.prod2.apresentacao();
        }
        
        if(this.prod3 != null) {
            this.prod3.apresentacao();
        }
        
        if(this.prod4 != null) {
            this.prod4.apresentacao();
        }
        
        if(this.prod5 != null) {
            this.prod5.apresentacao();
        }
    }
    
    // Construtores:
    public Banca(Produto prod1) {
        this.prod1 = prod1;
        this.prod2 = null;
        this.prod3 = null;
        this.prod4 = null;
        this.prod5 = null;
    }
    
    public Banca(Produto prod1, Produto prod2) {
        this.prod1 = prod1;
        this.prod2 = prod2;
        this.prod3 = null;
        this.prod4 = null;
        this.prod5 = null;
    }
    
    public Banca(Produto prod1, Produto prod2, Produto prod3) {
        this.prod1 = prod1;
        this.prod2 = prod2;
        this.prod3 = prod3;
        this.prod4 = null;
        this.prod5 = null;
    }
    
    public Banca(Produto prod1, Produto prod2, Produto prod3, Produto prod4) {
        this.prod1 = prod1;
        this.prod2 = prod2;
        this.prod3 = prod3;
        this.prod4 = prod4;
        this.prod5 = null;
    }
    
    public Banca(Produto prod1, Produto prod2, Produto prod3, Produto prod4, Produto prod5) {
        this.prod1 = prod1;
        this.prod2 = prod2;
        this.prod3 = prod3;
        this.prod4 = prod4;
        this.prod5 = prod5;
    }
    
    // Getters e Setters
    public Produto getProd1() {
        return this.prod1;
    }
    
    public Produto getProd2() {
        return this.prod2;
    }
    
    public Produto getProd3() {
        return this.prod3;
    }
    
    public Produto getProd4() {
        return this.prod4;
    }
    
    public Produto getProd5() {
        return this.prod5;
    }
    
    public void setProd1(Produto prod1) {
        this.prod1 = prod1;
    }
    
    public void setProd2(Produto prod2) {
        this.prod2 = prod2;
    }
    
    public void setProd3(Produto prod3) {
        this.prod3 = prod3;
    }
    
    public void setProd4(Produto prod4) {
        this.prod4 = prod4;
    }
    
    public void setProd5(Produto prod5) {
        this.prod5 = prod5;
    }
}
