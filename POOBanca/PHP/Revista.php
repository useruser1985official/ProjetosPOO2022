<?php
require_once "Produto.php";

class Revista extends Produto {
    protected $numero; // Integer

    // Override
    public function apresentacao() {
        parent::apresentacao();

        echo "O número da revista é {$this->numero}.<br/>";
    }

    // Construtor e Destrutor
    public function __construct($nome, $editora, $totPaginas, $numero) {
        parent::__construct($nome, $editora, $totPaginas);

        $this->numero = $numero;
    }

    public function __destruct() {
        echo "<p>Objeto Revista Destruído com Sucesso!</p>";
    }

    // Getters e Setters
    public function getNumero() {
        return $this->numero;
    }

    public function setNumero($numero) {
        $this->numero = $numero;
    }
}