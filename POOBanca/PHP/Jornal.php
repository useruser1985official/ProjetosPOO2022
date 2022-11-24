<?php
require_once "Produto.php";

class Jornal extends Produto {
    protected $diario; // Boolean

    // Override
    public function apresentacao() {
        parent::apresentacao();

        echo "O jornal é diário? " . ($this->diario ? "Sim" : "Não") . ".<br/>";
    }

    // Construtor e Destrutor
    public function __construct($nome, $editora, $totPaginas, $diario) {
        parent::__construct($nome, $editora, $totPaginas);

        $this->diario = $diario;
    }

    public function __destruct() {
        echo "<p>Objeto Jornal Destruído com Sucesso!</p>";
    }

    // Getter e Setter
    public function getDiario() {
        return $this->diario;
    }

    public function setDiario($diario) {
        $this->diario = $diario;
    }
}