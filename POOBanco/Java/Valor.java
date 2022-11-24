package poobanco;

public abstract class Valor {
    protected float vale;
    protected String tipo;
    
    public abstract void apresentacao();
    
    public Valor(float vale, String tipo) {
        this.vale = vale;
        this.tipo = tipo;
    }
    
    public float getVale() {
        return this.vale;
    }
    
    public String getTipo() {
        return this.tipo;
    }
    
    public void setVale(float vale) {
        this.vale = vale;
    }
    
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
}