<?php
abstract class Produto {
    protected $nome; // String
    protected $editora; // String
    protected $totPaginas; // Integer
    protected $pagAtual; // Integer
    protected $aberto; // Boolean

    // Métodos Comuns
    public function avancarPag() {
        if($this->aberto) {
            if($this->pagAtual < $this->totPaginas) {
                $this->pagAtual++;

                echo "A página atual do " . strtolower(get_class($this)) . " {$this->nome} é {$this->pagAtual}.<br/>";
            }
            else {
                echo "Esta é a última página do " . strtolower(get_class($this)) . " {$this->nome}!<br/>";
            }
        }
        else {
            echo "O " . strtolower(get_class($this)) . " {$this->nome} está fechado no momento!<br/>";
        }
    }

    public function voltarPag() {
        if($this->aberto) {
            if($this->pagAtual > 1) {
                $this->pagAtual--;

                echo "A página atual do " . strtolower(get_class($this)) . " {$this->nome} é {$this->pagAtual}.<br/>";
            }
            else {
                echo "Esta é a primeira página do " . strtolower(get_class($this)) . " {$this->nome}!<br/>";
            }
        }
        else {
            echo "O " . strtolower(get_class($this)) . " {$this->nome} está fechado no momento!<br/>";
        }
    }

    public function folhear($p) {
        if($this->aberto) {
            if($p < $this->totPaginas && $p > 1) {
                $this->pagAtual = $p;

                echo "A página atual do " . strtolower(get_class($this)) . " {$this->nome} é {$this->pagAtual}.<br/>";
            }
            else {
                echo "Esta página do " . strtolower(get_class($this)) . " {$this->nome} não existe!<br/>";
            }
        }
        else {
            echo "O " . strtolower(get_class($this)) . " {$this->nome} está fechado no momento!<br/>";
        }
    }
    
    public function abrir() {
        if(!$this->aberto) {
            $this->aberto = true;
        }

        echo "O " . strtolower(get_class($this)) . " {$this->nome} está aberto!<br/>";
    }

    public function fechar() {
        if($this->aberto) {
            $this->aberto = false;
        }

        echo "O " . strtolower(get_class($this)) . " {$this->nome} está fechado!<br/>";
    }

    // Virtual
    public function apresentacao() {
        echo "<hr/>";
        echo "Nome do " . strtolower(get_class($this)) . ": {$this->nome}, da editora {$this->editora}.<br/>";
        echo "O produto tem {$this->totPaginas} páginas e a atual é a {$this->pagAtual}.<br/>";
        echo "Ele está aberto? " . ($this->aberto ? "Sim" : "Não") . ".<br/>";
    }
    
    // Construtor e Destrutor
    public function __construct($nome, $editora, $totPaginas) {
        $this->nome = $nome;
        $this->editora = $editora;
        $this->totPaginas = $totPaginas;
        $this->pagAtual = 1;
        $this->aberto = false;
    }

    public function __destruct() {
        echo "<p>Objeto Produto Destruído com Sucesso!</p>";
    }

    // Getters e Setters
    public function getNome() {
        return $this->nome;
    }

    public function getEditora() {
        return $this->editora;
    }
    
    public function getTotPaginas() {
        return $this->totPaginas;
    }
    
    public function getPagAtual() {
        return $this->pagAtual;
    }
    
    public function getAberto() {
        return $this->aberto;
    }

    public function setNome($nome) {
        $this->nome = $nome;
    }

    public function setEditora($editora) {
        $this->editora = $editora;
    }
    
    public function setTotPaginas($totPaginas) {
        $this->totPaginas = $totPaginas;
    }
    
    public function setPagAtual($pagAtual) {
        $this->pagAtual = $pagAtual;
    }
    
    public function setAberto($aberto) {
        $this->aberto = $aberto;
    }
}