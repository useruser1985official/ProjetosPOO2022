<?php
require_once "Veiculo.php";

class Carro extends Veiculo {
    public function __construct($modelo, $tipo, $potencia, $ano) {
        parent::__construct($modelo, $tipo, $potencia, $ano);
    }

    public function __destruct() {
        echo "<p>Objeto Carro Destruído com Sucesso!</p>";
    }
}