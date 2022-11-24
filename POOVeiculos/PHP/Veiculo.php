<?php
abstract class Veiculo {
    protected $modelo; // String
    protected $tipo; // String
    protected $potencia; // Float
    protected $ano; // Integer
    protected $ligado; // Boolean
    protected $engatado; // Boolean

    public function ligar() {
        if(!$this->ligado) {
            $this->ligado = true;

            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está sendo ligado!<br/>";
        }
        else {
            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " já está ligado!<br/>";
        }
    }

    public function desligar() {
        if($this->ligado) {
            $this->ligado = false;

            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está sendo desligado!<br/>";
        }
        else {
            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " já está desligado!<br/>";
        }
    }

    public function andar() {
        if($this->ligado) {
            if($this->engatado) {
                echo "O "  . strtolower(get_class($this)) . " " . $this->modelo . " está andando!<br/>";
            }
            else {
                echo "Engate a marcha do "  . strtolower(get_class($this)) . " " . $this->modelo . " pra andar com ele!<br/>";
            }
        }
        else {
            echo "Ligue o "  . strtolower(get_class($this)) . " " . $this->modelo . " para andar com ele!<br/>";
        }
    }

    public function parar() {
        if($this->ligado) {
            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está sendo parado!<br/>";
        }
        else {
            echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está desligado, portanto, está parado!<br/>";
        }
    }

    public function virarEsquerda() {
        echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está virando à esquerda!<br/>";
    }

    public function virarDireita() {
        echo "O " . strtolower(get_class($this)) . " " . $this->modelo . " está virando à direita!<br/>";
    }

    // Sobrecargas
    public function engatar($m) {
        if($m >= 1 && $m <= 5) {
            $this->engatado = true;
            
            echo $m . "ª marcha do " . strtolower(get_class($this)) . " " . $this->modelo . " engatada!<br/>";
        }
        else {
            echo "Não é possível engatar essa marcha no "  . strtolower(get_class($this)) . " " . $this->modelo . ".<br/>";
        }
    }

    // Virtual
    public function engatarRe($r) {
        if(strtoupper($r) == "R") {
            $this->engatado = true;

            echo "Marcha à ré do " . strtolower(get_class($this)) . " " . $this->modelo . " engatada!<br/>";
        }
        else {
            echo "Não é possível engatar essa marcha no "  . strtolower(get_class($this)) . " " . $this->modelo . ".<br/>";
        }
    }

    public function engatarNeutro() {
        if($this->engatado) {
            $this->engatado = false;

            echo get_class($this) . " " . $this->modelo . " desengatado!<br/>";
        }
        else {
            echo "O "  . strtolower(get_class($this)) . " " . $this->modelo . " já está desengatado!<br/>";
        }
    }

    public function apresentacao() {
        echo "O " . strtolower(get_class($this)) . " é do modelo " . $this->modelo . " e do tipo " . $this->tipo . ".<br/>";
        echo "A potência dele é de {$this->potencia} e o ano é de {$this->ano}.<br/>";
        echo "<hr/>";
    }

    // Construtor e Destrutor
    public function __construct($modelo, $tipo, $potencia, $ano) {
        $this->modelo = $modelo;
        $this->tipo = $tipo;
        $this->potencia = $potencia;
        $this->ano = $ano;
        $this->ligado = false;
        $this->engatado = false;
    }

    public function __destruct() {
        echo "<p>Objeto Veículo Destruído com Sucesso!</p>";
    }

    // Getters
    public function getModelo() {
        return $this->modelo;
    }

    public function getTipo() {
        return $this->tipo;
    }

    public function getPotencia() {
        return $this->potencia;
    }

    public function getAno() {
        return $this->ano;
    }

    public function getLigado() {
        return $this->ligado;
    }

    public function getEngatado() {
        return $this->engatado;
    }
    
    // Setters
    public function setModelo($modelo) {
        $this->modelo = $modelo;
    }

    public function setTipo($tipo) {
        $this->tipo = $tipo;
    }

    public function setPotencia($potencia) {
        $this->potencia = $potencia;
    }

    public function setAno($ano) {
        $this->ano = $ano;
    }

    public function setLigado($ligado) {
        $this->ligado = $ligado;
    }

    public function setEngatado($engatado) {
        $this->engatado = $engatado;
    }
}