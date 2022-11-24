package pooveiculos;

public abstract class Veiculo {
    protected String modelo;
    protected String tipo;
    protected float potencia;
    protected int ano;
    protected boolean ligado;
    protected boolean engatado;
    
    public void ligar() {
        if(!this.ligado) {
            this.ligado = true;
            
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está sendo ligado!");
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " já está ligado!");
        }
    }
    
    public void desligar() {
        if(this.ligado) {
            this.ligado = false;
            
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está sendo desligado!");
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " já está desligado!");
        }
    }
    
    public void andar() {
        if(this.ligado) {
            if(this.engatado) {
                System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está andando!");
            }
            else {
                System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " pra andar com ele!");
            }
        }
        else {
            System.out.println("Ligue o " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " para andar com ele!");
        }
    }
    
    public void parar() {
        if(this.ligado) {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está sendo parado!");
        }
        else {
            System.out.println("Ligue o " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está desligado, portanto, está parado!");
        }
    }
    
    public void virarEsquerda() {
        System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está virando à esquerda!");
    }
    
    public void virarDireita() {
        System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " está virando à direita!");
    }
    
    public void engatar(int m) {
        if(m >= 1 && m <= 5) {
            this.engatado = true;
            
            System.out.println(m + "ª marcha do " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " engatada!");
        }
        else {
            System.out.println("Não é possível engatar essa marcha no " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + ".");
        }
    }
    
    public void engatar(char r) {
        if(Character.toUpperCase(r) == 'R') {
            this.engatado = true;
            
            System.out.println("Marcha à ré do " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " engatada!");
        }
        else {
            System.out.println("Não é possível engatar essa marcha no " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + ".");
        }
    }
    
    public void engatar() {
        if(this.engatado) {
            this.engatado = false;
            
            System.out.println(this.getClass().getSimpleName() + " " + this.modelo + " desengatado!");
        }
        else {
            System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + " já está desengatado!");
        }
    }
    
    // Construtor
    public Veiculo(String modelo, String tipo, float potencia, int ano) {
        this.modelo = modelo;
        this.tipo = tipo;
        this.potencia = potencia;
        this.ano = ano;
        this.ligado = false;
        this.engatado = false;
    }
    
    public void apresentacao() {
        System.out.println("O " + this.getClass().getSimpleName().toLowerCase() + " é do modelo " + this.modelo + " e do tipo " + this.tipo + ".");
        System.out.println("A potência dele é de " + this.potencia + " e o ano é de " + this.ano + ".");
        System.out.println("---------------------------------------------------------------------------------------------------------------------");
    }
    
    // Getters
    public String getModelo() {
        return this.modelo;
    }
    
    public String getTipo() {
        return this.tipo;
    }
    
    public float getPotencia() {
        return this.potencia;
    }
    
    public int getAno() {
        return this.ano;
    }
    
    public boolean getLigado() {
        return this.ligado;
    }
    
    public boolean getEngatado() {
        return this.engatado;
    }
    
    // Setters
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    
    public void setPotencia(float potencia) {
        this.potencia = potencia;
    }
    
    public void setAno(int ano) {
        this.ano = ano;
    }
    
    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }
    
    public void setEngatado(boolean engatado) {
        this.engatado = engatado;
    }
}