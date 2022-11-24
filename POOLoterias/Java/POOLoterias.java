package pooloterias;

import java.util.List;
import java.util.Arrays;

public class POOLoterias {
    public static void main(String[] args) {
        Runnable linha = () -> System.out.println("-----------------------------------------------------------");
        
        List<Integer> faiLoto = Arrays.asList(11, 12, 13, 14, 15);
        Loteria lotofacil = new Jogo(15, 15, 01, 25, faiLoto);
        List<Integer> apLoto = Arrays.asList(1, 3, 4, 6, 8, 9, 10, 11, 12, 15, 17, 18, 21, 23, 25);
        
        lotofacil.fazerAposta(apLoto);
        lotofacil.sorteio();
        
        linha.run();
        
        List<Integer> faiQuina = Arrays.asList(2, 3, 4, 5);
        Loteria quina = new Jogo(5, 5, 1, 80, faiQuina);
        List<Integer> apQui = Arrays.asList(5, 20, 23, 53, 80);
        
        quina.fazerAposta(apQui);
        quina.sorteio();
        
        linha.run();
        
        List<Integer> faiSe = Arrays.asList(4, 5, 6);
        Loteria mega = new Jogo(6, 6, 1, 60, faiSe);
        List<Integer> apSe = Arrays.asList(10, 24, 30, 36, 51, 53);
        
        mega.fazerAposta(apSe);
        mega.sorteio();
    }
}