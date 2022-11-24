<?php
require_once "Veiculo.php";

class Caminhao extends Veiculo {
    public function __construct($modelo, $tipo, $potencia, $ano) {
        parent::__construct($modelo, $tipo, $potencia, $ano);
    }

    public function __destruct() {
        echo "<p>Objeto Caminhão Destruído com Sucesso!<br/>";
    }
}