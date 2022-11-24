<?php
require_once "Produto.php";
require_once "Ponto.php";

class Banca implements Ponto {
    private $prod1; // Produto (Object)
    private $prod2; // Produto (Object)
    private $prod3; // Produto (Object)
    private $prod4; // Produto (Object)
    private $prod5; // Produto (Object)

    // Override
    public function apresentacao() {
        echo "Os produtos da banca são:";

        // Ifs independentes
        if($this->prod1 != null) {
            $this->prod1->apresentacao();
        }

        if($this->prod2 != null) {
            $this->prod2->apresentacao();
        }

        if($this->prod3 != null) {
            $this->prod3->apresentacao();
        }

        if($this->prod4 != null) {
            $this->prod4->apresentacao();
        }

        if($this->prod5 != null) {
            $this->prod5->apresentacao();
        }
    }

    // Construtor e Destrutor
    // Sobrecarga
    public function __construct($prod1, $prod2 = null, $prod3 = null, $prod4 = null, $prod5 = null) {
        $this->prod1 = $prod1;
        $this->prod2 = $prod2;
        $this->prod3 = $prod3;
        $this->prod4 = $prod4;
        $this->prod5 = $prod5;
    }

    public function __destruct() {
        unset($this->prod1);
        unset($this->prod2);
        unset($this->prod3);
        unset($this->prod4);
        unset($this->prod5);
        
        echo "<p>Objeto Banca Destruído com Sucesso!</p>";
    }

    // Getters e Setters
    public function getProd1() {
        return $this->prod1;
    }
    
    public function getProd2() {
        return $this->prod2;
    }
    
    public function getProd3() {
        return $this->prod3;
    }
    
    public function getProd4() {
        return $this->prod4;
    }
    
    public function getProd5() {
        return $this->prod5;
    }

    public function setProd1($prod1) {
        $this->prod1 = $prod1;
    }

    public function setProd2($prod2) {
        $this->prod2 = $prod2;
    }

    public function setProd3($prod3) {
        $this->prod3 = $prod3;
    }

    public function setProd4($prod4) {
        $this->prod4 = $prod4;
    }

    public function setProd5($prod5) {
        $this->prod5 = $prod5;
    }
}