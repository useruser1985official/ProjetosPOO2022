<?php
require_once "Guardado.php";

class Cofre implements Guardado {
    private $total; // Float

    public function depositar($vl) {
        if($vl->getVale() >= 0) {
            $this->total += $vl->getVale();

            printf("Foi depositada no cofre a quantia de R\$%.2f.<br/>", $vl->getVale());
        }
        else {
            echo "Não é possível depositar esse valor no cofre!<br/>";
        }
    }

    public function retirar($qt) {
        if($qt >= 0) {
            if($qt > $this->total) {
                printf("Foi retirada do cofre a quantia de R\$%.2f.<br/>", $this->total);

                $this->total -= $this->total;
            }
            else {
                printf("Foi retirada do cofre a quantia de R\$%.2f.<br/>", $qt);

                $this->total -= $qt;
            }
        }
        else {
            echo "Não é possível retirar esse valor do cofre!<br/>";
        }
    }

    public function verificar() {
        printf("O valor total dentro do cofre é de R\$%.2f.<br/>", $this->total);
    }

    public function __construct() {
        $this->total = 0;
    }

    public function __destruct() {
        echo "<p>Objeto Cofre Destruído com Sucesso!</p>";
    }

    public function getTotal() {
        return $this->total;
    }

    public function setTotal($total) {
        $this->total = $total;
    }
}