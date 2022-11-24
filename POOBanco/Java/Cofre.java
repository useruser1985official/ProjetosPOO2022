package poobanco;

public class Cofre implements Guardado {
    private float total;
    
    @Override
    public void depositar(Valor vl) {
        if(vl.getVale() >= 0) {
            this.total += vl.getVale();
            
            System.out.printf("Foi depositada no cofre a quantia de R$%.2f.\n", vl.getVale());
        }
        else {
            System.out.println("Não é possível depositar esse valor no cofre!");
        }
    }
    
    @Override
    public void retirar(float qt) {
        if(qt >= 0) {
            if(qt > this.total) {
                System.out.printf("Foi retirada do cofre a quantia de R$%.2f.\n", this.total);
                
                this.total -= this.total;
            }
            else {
                System.out.printf("Foi retirada do cofre a quantia de R$%.2f.\n", qt);
                
                this.total -= qt;
            }
        }
        else {
            System.out.println("Não é possível retirar esse valor do cofre!");
        }
    }
    
    @Override
    public void verificar() {
        System.out.printf("O valor total dentro do cofre é de R$%.2f.\n", this.total);
    }
    
    public Cofre() {
        this.total = 0;
    }
    
    public float getTotal() {
        return this.total;
    }
    
    public void setTotal(float total) {
        this.total = total;
    }
}