<?php
require_once "Dinheiro.php";

interface Guardado {
    public function depositar($vl); // Valor (Object)
    public function retirar($qt); // Float
    public function verificar();
}