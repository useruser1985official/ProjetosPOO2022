package poogenericos;

public class POOGenericos {
    public static void main(String[] args) {
        Gerador<String> texto = new Generico<>();
        
        texto.setEnt("Exemplo de Texto!");
        System.out.println(texto.getEnt());
        
        Gerador<Integer> numero = new Generico<>();
        
        numero.setEnt(50);
        System.out.println(numero.getEnt());
        
        Gerador<Float> real = new Generico<>();
        
        real.setEnt(9.85f);
        System.out.println(real.getEnt());
        
        Gerador<Character> letra = new Generico<>();
        
        letra.setEnt('A');
        System.out.println(letra.getEnt());
    } 
}