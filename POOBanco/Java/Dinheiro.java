package poobanco;

public class Dinheiro extends Valor {
    @Override
    public void apresentacao() {
        System.out.printf("A %s tem o valor de R$%.2f.\n", this.getTipo(), this.getVale());
    }
    
    public Dinheiro(float vale, String tipo) {
        super(vale, tipo);
    }
}
