<?php
require_once "Veiculo.php";

class Moto extends Veiculo {
    // Override
    public function engatarRe($r) {
        if(strtoupper($r) == "R") {
            echo "Moto não tem ré! Empurre a moto!<br/>";
        }
        else {
            echo "Não é possível engatar essa marcha no "  . strtolower(get_class($this)) . " " . $this->modelo . ".<br/>";
        }
    }
    
    public function __construct($modelo, $tipo, $potencia, $ano) {
        parent::__construct($modelo, $tipo, $potencia, $ano);
    }

    public function destruct() {
        echo "<p>Objeto Moto Destruído com Sucesso!</p>";
    }
}