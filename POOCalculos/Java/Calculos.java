package poocalculos;

public class Calculos {
    public static int quadrado(int num) throws Exception {
        if(num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }
        
        return num * num;
    }
    
    public static int cubo(int num) throws Exception {
        if(num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }
        
        return num * num * num;
    }
    
    public static String fatorial(int num) throws Exception {
        if(num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }
        
        int fat = 1;
        String saida = "";
        
        while(num >= 1) {
            fat *= num;
            
            saida += num;
            
            saida += num > 1 ? " x " : " = ";
            
            num--;
        }
        
        saida += fat;
        
        return saida;
    }
    
    public static String fibonacci(int num) throws Exception {
        if(num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }
        
        int t1 = 0;
        int t2 = 1;
        int t3 = 0;
        int cont = 3;
        
        String said = t1 + " → " + t2;
        
        while(cont <= num) {
            t3 = t1 + t2;
            said += " → " + t3;
            t1 = t2;
            t2 = t3;
            cont++;
        }
        
        said += " → FIM";
        
        return said;
    }
}