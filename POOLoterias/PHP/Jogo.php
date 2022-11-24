<?php
require_once "Loteria.php";

class Jogo implements Loteria {
    private $quantNum; // Integer
    private $quantResul; // Integer
    private $miniCart; // Integer
    private $maxiCart; // Integer
    private $faixas; // List Integer
    private $aposta; // List Integer
    private $invalida; // Boolean

    // Override
    public function fazerAposta($aposta) {
        $this->aposta = $aposta;

        if($this->aposta[count($this->aposta) - 1] <= $this->maxiCart && $this->quantNum == count($this->aposta)) {
            echo "Os números apostados são: ";

            for($i = 0; $i < count($this->aposta) - 1; $i++) {
                echo "{$this->aposta[$i]} ";
            }

            echo $this->aposta[count($this->aposta) - 1] . ".<br/>";
        }
        else {
            echo "Aposta inválida!<br/>";
            $this->invalida = true;
        }
    }

    // Override
    public function sorteio() {
        if(!$this->invalida) {
            $num = 0; // Essa não inicializa
            $sorte = array();
            $cont = 0;

            while($cont < $this->quantResul) {
                $num = rand($this->miniCart, $this->maxiCart);

                if(!in_array($num, $sorte)) {
                    array_push($sorte, $num);
                    $cont++;
                }
            }

            sort($sorte);

            echo "Números Sorteados: ";

            for($i = 0; $i < $this->quantResul - 1; $i++) {
                echo "{$sorte[$i]} ";
            }

            echo $sorte[$this->quantResul - 1] . ".<br/>";

            $acertos = 0;
            $numCert = array();
            $cont = 0; // Reatribuição

            while($cont < $this->quantResul) {
                if(in_array($sorte[$cont], $this->aposta)) {
                    array_push($numCert, $sorte[$cont]);
                    $acertos++;
                }
                $cont++;
            }

            if(count($numCert) > 0) { // Pode usar o método empty ou equivalente com negação
                echo "Você acertou $acertos números que foram: ";

                for($i = 0; $i < count($numCert) - 1; $i++) {
                    echo "{$numCert[$i]} ";
                }

                echo $numCert[count($numCert) - 1];

                if(in_array($acertos, $this->faixas)) {
                    echo " e acertou a faixa de $acertos pontos!<br/>";
                }
                else {
                    echo "!<br/>";
                }
            }
            else {
                echo "Você não acertou nenhum número!<br/>";
            }
        }
        else {
            echo "Sorteio inválido!<br/>";
        }
    }

    // Construtor e Destrutor
    public function __construct($quantNum, $quantResul, $miniCart, $maxiCart, $faixas) {
        $this->quantNum = $quantNum;
        $this->quantResul = $quantResul;
        $this->miniCart = $miniCart;
        $this->maxiCart = $maxiCart;
        $this->faixas = $faixas;
        $this->invalida = false;
    }

    public function __destruct() {
        echo "<p>Objeto Jogo Destruído com Sucesso!</p>";
    }

    // Getters e Setters
    public function getQuantNum() {
        return $this->quantNum;
    }
    
    public function getQuantResul() {
        return $this->quantResul;
    }
    
    public function getMiniCart() {
        return $this->miniCart;
    }
    
    public function getMaxiCart() {
        return $this->maxiCart;
    }
    
    public function getFaixas() {
        return $this->faixas;
    }
    
    public function getAposta() {
        return $this->aposta;
    }
    
    public function getInvalida() {
        return $this->invalida;
    }

    public function setQuantNum($quantNum) {
        $this->quantNum = $quantNum;
    }
    
    public function setQuantResul($quantResul) {
        $this->quantResul = $quantResul;
    }
    
    public function setMiniCart($miniCart) {
        $this->miniCart = $miniCart;
    }
    
    public function setMaxiCart($maxiCart) {
        $this->maxiCart = $maxiCart;
    }
    
    public function setFaixas($faixas) {
        $this->faixas = $faixas;
    }
    
    public function setAposta($aposta) {
        $this->aposta = $aposta;
    }
    
    public function setInvalida($invalida) {
        $this->invalida = $invalida;
    }
}