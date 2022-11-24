package pooveiculos;

public class Moto extends Veiculo {
    @Override
    public void engatar(char r) {
        if(Character.toUpperCase(r) == 'R') {
            System.out.println("Moto não tem ré! Empurre a moto!");
        }
        else {
            System.out.println("Não é possível engatar essa marcha no " + this.getClass().getSimpleName().toLowerCase() + " " + this.modelo + ".");
        }
    }
    
    public Moto(String modelo, String tipo, float potencia, int ano) {
        super(modelo, tipo, potencia, ano);
    }
}
