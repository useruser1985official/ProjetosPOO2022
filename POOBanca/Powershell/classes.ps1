class Produto {
    hidden [string]$nome
    hidden [string]$editora
    hidden [int]$totPaginas
    hidden [int]$pagAtual
    hidden [bool]$aberto

    [void]avancarPag() {
        if($this.aberto) {
            if($this.pagAtual -lt $this.totPaginas) {
                $this.pagAtual++

                Write-Host ([string]::Format("A página atual do {0} {1} é {2}.", $this.GetType().Name.ToLower(), $this.nome, $this.pagAtual))
            }
            else {
                Write-Host ([string]::Format("Está é a última página do {0} {1}!", $this.GetType().Name.ToLower(), $this.nome))
            }
        }
        else {
            Write-Host ([string]::Format("O {0} {1} está fechado no momento!", $this.GetType().Name.ToLower(), $this.nome))
        }
    }
    
    [void]voltarPag() {
        if($this.aberto) {
            if($this.pagAtual -gt 1) {
                $this.pagAtual--

                Write-Host ([string]::Format("A página atual do {0} {1} é {2}.", $this.GetType().Name.ToLower(), $this.nome, $this.pagAtual))
            }
            else {
                Write-Host ([string]::Format("Está é a primeira página do {0} {1}!", $this.GetType().Name.ToLower(), $this.nome))
            }
        }
        else {
            Write-Host ([string]::Format("O {0} {1} está fechado no momento!", $this.GetType().Name.ToLower(), $this.nome))
        }
    }

    [void]folhear([int]$p) {
        if($this.aberto) {
            if($p -lt $this.totPaginas -and $p -gt 1) {
                $this.pagAtual = $p

                Write-Host ([string]::Format("A página atual do {0} {1} é {2}.", $this.GetType().Name.ToLower(), $this.nome, $this.pagAtual))
            }
            else {
                Write-Host ([string]::Format("Esta página do {0} {1} não existe!", $this.GetType().Name.ToLower(), $this.nome))
            }
        }
        else {
            Write-Host ([string]::Format("O {0} {1} está fechado no momento!", $this.GetType().Name.ToLower(), $this.nome))
        }
    }

    [void]abrir() {
        if(-not $this.aberto) {
            $this.aberto = $true
        }

        Write-Host ([string]::Format("O {0} {1} está aberto!", $this.GetType().Name.ToLower(), $this.nome))
    }

    [void]fechar() {
        if($this.aberto) {
            $this.aberto = $false
        }

        Write-Host ([string]::Format("O {0} {1} está fechado!", $this.GetType().Name.ToLower(), $this.nome))
    }

    [void]apresentacao() {
        Write-Host "--------------------------------------------------------------------------------------------------------"
        Write-Host ([string]::Format("Nome do {0}: {1}, da editora {2}.", $this.GetType().Name.ToLower(), $this.nome, $this.editora))
        Write-Host ([string]::Format("O produto tem {0} páginas e a atual é a {1}.", $this.totPaginas, $this.pagAtual))

        if($this.aberto) {
            $sit = "Sim"
        }
        else {
            $sit = "Não"
        }

        Write-Host ([string]::Format("Ele está aberto? {0}.", $sit))
    }

    Produto([string]$nome, [string]$editora, [int]$totPaginas) {
        $this.nome = $nome
        $this.editora = $editora
        $this.totPaginas = $totPaginas
        $this.pagAtual = 1
        $this.aberto = $false
    }

    [string]getNome() {
        return $this.nome
    }

    [string]getEditora() {
        return $this.editora
    }

    [int]getTotPaginas() {
        return $this.totPaginas
    }

    [int]getPagAtual() {
        return $this.pagAtual
    }

    [bool]getAberto() {
        return $this.aberto
    }

    [void]setNome([string]$nome) {
        $this.nome = $nome
    }

    [void]setEditora([string]$editora) {
        $this.editora = $editora
    }

    [void]setTotPaginas([int]$totPaginas) {
        $this.totPaginas = $totPaginas
    }

    [void]setPagAtual([int]$pagAtual) {
        $this.pagAtual = $pagAtual
    }

    [void]setAberto([bool]$aberto) {
        $this.aberto = $aberto
    }
}

class Revista : Produto {
    hidden [int]$numero

    [void]apresentacao() {
        [Produto]::apresentacao

        Write-Host ([string]::Format("O número da revista é {0}.", $this.numero))
    }

    Revista([string]$nome, [string]$editora, [int]$totPaginas, [int]$numero) : base($nome, $editora, $totPaginas) {
        $this.numero = $numero      
    }

    [int]getNumero() {
        return $this.numero
    }

    [void]setNumero([int]$numero) {
        $this.numero = $numero
    }
}

class Hq : Revista {
    Hq([string]$nome, [string]$editora, [int]$totPaginas, [int]$numero) : base($nome, $editoa, $totPaginas, $numero) {
        
    }
}

class Jornal : Produto {
    hidden [bool]$diario

    [void]apresentacao() {
        [Produto]::apresentacao

        if($this.diario) {
            $sit = "Sim"
        }
        else {
            $sit = "Não"
        }

        Write-Host ([string]::Format("O jornal é diário? {0}.", $sit))
    }

    Jornal([string]$nome, [string]$editora, [int]$totPaginas, [bool]$diario) : base($nome, $editora, $totPaginas) {
        $this.diario = $diario
    }

    [bool]getDiario() {
        return $this.diario
    }

    [void]setDiario([bool]$diario) {
        $this.diario = $diario
    }
}

class Livro : Produto {
    Livro([string]$nome, [string]$editora, [int]$totPaginas) : base($nome, $editora, $totPaginas) {

    }
}

class Ponto {
    [void]apresentacao() {
        throw "Implemente o método `"apresentacao`"!"
    }
}

class Banca : Ponto {
    hidden [Produto]$prod1
    hidden [Produto]$prod2
    hidden [Produto]$prod3
    hidden [Produto]$prod4
    hidden [Produto]$prod5

    [void]apresentacao() {
        Write-Host "Os produtos da banca são:"

        # Ifs independentes:

        if($this.prod1 -ne $null) {
            $this.prod1.apresentacao()
        }

        if($this.prod2 -ne $null) {
            $this.prod2.apresentacao()
        }

        if($this.prod3 -ne $null) {
            $this.prod3.apresentacao()
        }

        if($this.prod4 -ne $null) {
            $this.prod4.apresentacao()
        }

        if($this.prod5 -ne $null) {
            $this.prod5.apresentacao()
        }
    }

    Banca([Produto]$prod1, [Produto]$prod2 = $null, [Produto]$prod3 = $null, [Produto]$prod4 = $null, [Produto]$prod5 = $null) {
        $this.prod1 = $prod1
        $this.prod2 = $prod2
        $this.prod3 = $prod3
        $this.prod4 = $prod4
        $this.prod5 = $prod5
    }

    [Produto]getProd1() {
        return $this.prod1
    }

    [Produto]getProd2() {
        return $this.prod2
    }

    [Produto]getProd3() {
        return $this.prod3
    }

    [Produto]getProd4() {
        return $this.prod4
    }

    [Produto]getProd5() {
        return $this.prod5
    }

    [void]setProd1([Produto]$prod1) {
        $this.prod1 = $prod1
    }

    [void]setProd2([Produto]$prod2) {
        $this.prod2 = $prod2
    }

    [void]setProd3([Produto]$prod3) {
        $this.prod3 = $prod3
    }

    [void]setProd4([Produto]$prod4) {
        $this.prod4 = $prod4
    }

    [void]setProd5([Produto]$prod5) {
        $this.prod5 = $prod5
    }
}