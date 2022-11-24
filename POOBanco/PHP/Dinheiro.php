<?php
require_once "Valor.php";

class Dinheiro extends Valor {
    // Override
    public function apresentacao() {
        printf("A %s tem o valor de R\$%.2f.<br/>", $this->getTipo(), $this->getVale());
    }
    
    public function __construct($vale, $tipo) {
        parent::__construct($vale, $tipo);
    }

    public function __destruct() {
        echo "<p>Objeto Dinheiro Destruído com Sucesso!</p>";
    }
}