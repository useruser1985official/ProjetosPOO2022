<?php
require_once "Produto.php";

class Livro extends Produto {
    public function __construct($nome, $editora, $totPaginas) {
        parent::__construct($nome, $editora, $totPaginas);
    }

    public function __destruct() {
        echo "<p>Objeto Livro Destruído com Sucesso!</p>";
    }
}