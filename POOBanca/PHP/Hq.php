<?php
require_once "Revista.php";

class Hq extends Revista {
    public function __construct($nome, $editora, $totPaginas, $numero) {
        parent::__construct($nome, $editora, $totPaginas, $numero);
    }

    public function __destruct() {
        echo "<p>Objeto Hq Destruído com Sucesso!</p>";
    }
}