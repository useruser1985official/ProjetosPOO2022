package poobanca;

public abstract class Produto {
    protected String nome;
    protected String editora;
    protected int totPaginas;
    protected int pagAtual;
    protected boolean aberto;
    
    // Métodos Comuns
    public void avancarPag() {
        if(this.aberto) {
            if(this.pagAtual < this.totPaginas) {
                this.pagAtual++;
                
                System.out.println("A página atual do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " é " + this.pagAtual + ".");
            }
            else {
                System.out.println("Esta é a última página do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + ".");
            }
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " está fechado no momento!");
        }
    }
    
    public void voltarPag() {
        if(this.aberto) {
            if(this.pagAtual > 1) {
                this.pagAtual--;
                
                System.out.println("A página atual do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " é " + this.pagAtual + ".");
            }
            else {
                System.out.println("Esta é a primeira página do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + ".");
            }
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " está fechado no momento!");
        }
    }
    
    public void folhear(int p) {
        if(this.aberto) {
            if(p < this.totPaginas && p > 1) {
                this.pagAtual = p;
                
                System.out.println("A página atual do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " é " + this.pagAtual + ".");
            }
            else {
                System.out.println("Esta página do " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " não existe!");
            }
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " está fechado no momento!");
        }
    }
    
    public void abrir() {
        if(!this.aberto) {
            this.aberto = true;
        }
        
        System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " está aberto!");
    }
    
    public void fechar() {
        if(this.aberto) {
            this.aberto = false;
        }
        
        System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.nome + " está fechado!");
    }
    
    public void apresentacao() {
        System.out.println("----------------------------------------------------------------------------------------");
        System.out.println("Nome do " + this.getClass().getSimpleName().toLowerCase() + ": " + this.nome + ", da editora " + this.editora + ".");
        System.out.println("O produto tem " + this.totPaginas + " páginas e a atual é a " + this.pagAtual + ".");
        System.out.println("Ele está aberto? " + (this.aberto ? "Sim" : "Não") + ".");
    }
    
    // Construtor
    public Produto(String nome, String editora, int totPaginas) {
        this.nome = nome;
        this.editora = editora;
        this.totPaginas = totPaginas;
        this.pagAtual = 1;
        this.aberto = false;
    }
    
    // Getters e Setters
    public String getNome() {
        return this.nome;
    }
    
    public String getEditora() {
        return this.editora;
    }
    
    public int getTotPaginas() {
        return this.totPaginas;
    }
    
    public int getPagAtual() {
        return this.pagAtual;
    }
    
    public boolean getAberto() {
        return this.aberto;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public void setEditora(String editora) {
        this.editora = editora;
    }
    
    public void setTotPaginas(int totPaginas) {
        this.totPaginas = totPaginas;
    }
    
    public void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }
    
    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }
}