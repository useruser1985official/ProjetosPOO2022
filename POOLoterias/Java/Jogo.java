package pooloterias;

import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class Jogo implements Loteria {
    private int quantNum;
    private int quantResul;
    private int miniCart;
    private int maxiCart;
    private List<Integer> faixas;
    private List<Integer> aposta;
    private boolean invalida;
    
    @Override
    public void fazerAposta(List<Integer> aposta) {
        this.aposta = aposta;
        
        if(this.aposta.get(this.aposta.size() - 1) <= this.maxiCart && this.quantNum == this.aposta.size()) {
            System.out.print("Os números apostados são: ");
            
            for(int i = 0; i < this.aposta.size() - 1; i++) {
                System.out.print(this.aposta.get(i) + " ");
            }
            
            System.out.println(this.aposta.get(this.aposta.size() - 1) + ".");
        }
        else {
            System.out.println("Aposta Inválida!");
            this.invalida = true;
        }
    }
    
    @Override
    public void sorteio() {
        if(!this.invalida) {
            int num;
            List<Integer> sorte = new ArrayList<>();
            int cont = 0;
            
            while(cont < this.quantResul) {
                num = (int)Math.round(Math.random() * (this.maxiCart - this.miniCart) + this.miniCart);
                
                if(!sorte.contains(num)) {
                    sorte.add(num);
                    cont++;
                }
            }
            
            Collections.sort(sorte);
            
            System.out.print("Números Sorteados: ");
            
            for(int i = 0; i < this.quantResul - 1; i++) {
                System.out.print(sorte.get(i) + " ");
            }
            
            System.out.println(sorte.get(this.quantResul - 1) + ".");
            
            int acertos = 0;
            List<Integer> numCert = new ArrayList<>();
            cont = 0;
            
            while(cont < this.quantResul) {
                if(this.aposta.contains(sorte.get(cont))) {
                    numCert.add(sorte.get(cont));
                    acertos++;
                }
                cont++;
            }
            
            if(!numCert.isEmpty()) {
                System.out.print("Você acertou " + acertos + " números que foram: ");
                
                for(int i = 0; i < numCert.size() - 1; i++) {
                    System.out.print(numCert.get(i) + " ");
                }
                
                System.out.print(numCert.get(numCert.size() - 1));
                
                if(this.faixas.contains(acertos)) {
                    System.out.println(" e acertou a faixa de " + acertos + " pontos!");
                }
                else {
                    System.out.println("!");
                }
            }
            else {
                System.out.println("Você não acertou nenhum número!");
            }
        }
        else {
            System.out.println("Sorteio inválido!");
        }
    }
    
    // Construtor
    public Jogo(int quantNum, int quantResul, int miniCart, int maxiCart, List<Integer> faixas) {
        this.quantNum = quantNum;
        this.quantResul = quantResul;
        this.miniCart = miniCart;
        this.maxiCart = maxiCart;
        this.faixas = faixas;
        this.invalida = false;
    }
    
    // Getters e Setters
    public int getQuantNum() {
        return this.quantNum;
    }
    
    public int getQuantResul() {
        return this.quantResul;
    }
    
    public int getMiniCart() {
        return this.miniCart;
    }
    
    public int getMaxiCart() {
        return this.maxiCart;
    }
    
    public List<Integer> getFaixas() {
        return this.faixas;
    }
    
    public List<Integer> getAposta() {
        return this.aposta;
    }
    
    public boolean getInvalida() {
        return this.invalida;
    }
    
    public void setQuantNum(int quantNum) {
        this.quantNum = quantNum;
    }
    
    public void setQuantResul(int quantResul) {
        this.quantResul = quantResul;
    }
    
    public void setMiniCart(int miniCart) {
        this.miniCart = miniCart;
    }
    
    public void setMaxiCart(int maxiCart) {
        this.maxiCart = maxiCart;
    }
    
    public void setFaixas(List<Integer> faixas) {
        this.faixas = faixas;
    }
    
    public void setAposta(List<Integer> aposta) {
        this.aposta = aposta;
    }
    
    public void setInvalida(boolean invalida) {
        this.invalida = invalida;
    }
}