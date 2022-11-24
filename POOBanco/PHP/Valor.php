<?php
abstract class Valor {
    protected $vale; // Float
    protected $tipo; // String

    public abstract function apresentacao();

    public function __construct($vale, $tipo) {
        $this->vale = $vale;
        $this->tipo = $tipo;
    }

    public function __destruct() {
        echo "<p>Objeto Valor Destruído com Sucesso!</p>";
    }

    public function getVale() {
        return $this->vale;
    }

    public function getTipo() {
        return $this->tipo;
    }

    public function setVale($vale) {
        $this->vale = $vale;
    }

    public function setTipo($tipo) {
        $this->tipo = $tipo;
    }
}