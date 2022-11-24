class Veiculo {
    hidden [string]$modelo
    hidden [string]$tipo
    hidden [float]$potencia
    hidden [int]$ano
    hidden [bool]$ligado
    hidden [bool]$engatado

    [void]ligar() {
        if(-not $this.ligado) {
            $this.ligado = $true

            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está sendo ligado!"
        }
        else {
            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "já está ligado!"
        }
    }

    [void]desligar() {
        if($this.ligado) {
            $this.ligado = $false

            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está sendo desligado!"
        }
        else {
            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "já está desligado!"
        }
    }

    [void]andar() {
        if($this.ligado) {
            if($this.engatado) {
                Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está andando!"
            }
            else {
                Write-Host "Engate a marcha do" $this.GetType().Name.ToLower() $this.modelo "para andar com ele!"
            }
        }
        else {
            Write-Host "Ligue o" $this.GetType().Name.ToLower() $this.modelo "para andar com ele!"
        }
    }
    
    [void]parar() {
        if($this.ligado) {
            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está sendo parado!"
        }
        else {
            Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está desligado, portanto, está parado!"
        }
    }

    [void]virarEsquerda() {
        Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está virando à esquerda!"
    }
    
    [void]virarDireita() {
        Write-Host "O" $this.GetType().Name.ToLower() $this.modelo "está virando à direita!"
    }

    [void]engatar([int]$m) {
        if($m -ge 1 -and $m -le 5) {
            $this.engatado = $true

            Write-Host "$m`ª marcha do" $this.GetType().Name.ToLower() $this.modelo "engatada!"
        }
        else {
            Write-Host "Não é possível engatar essa marcha no" $this.GetType().Name.ToLower() $this.modelo "."
        }
    }

    [void]engatarRe([char]$r) {
        if([char]::ToUpper($r) -eq 'R') {
            $this.engatado = $true

            Write-Host "Marcha à ré do" $this.GetType().Name.ToLower() $this.modelo "engatada!"
        }
        else {
            Write-Host "Não é possível engatar essa marcha no" $this.GetType().Name.ToLower() $this.modelo "."
        }
    }

    [void]engatarNeutro() {
        if($this.engatado) {
            $this.engatado = $false

            Write-Host $this.GetType().Name $this.modelo "desengatado!"
        }
        else {
            Write-Host "Não é possível engatar essa marcha no" $this.GetType().Name.ToLower() $this.modelo "."
        }
    }

    [void]apresentacao() {
        Write-Host ([string]::Format("O {0} é do modelo {1} e do tipo {2}.", $this.GetType().Name.ToLower(), $this.modelo, $this.tipo))
        Write-Host ([string]::Format("A potência dele é de {0:0.0} e o ano é de {1}.", $this.potencia, $this.ano))
        Write-Host "---------------------------------------------------------------------------------------------------------"
    }

    Veiculo([string]$modelo, [string]$tipo, [float]$potencia, [int]$ano) {
        $this.modelo = $modelo
        $this.tipo = $tipo
        $this.potencia = $potencia
        $this.ano = $ano
        $this.ligado = $false
        $this.engatado = $false
    }
    
    [string]getModelo() {
        return $this.modelo
    }

    [string]getTipo() {
        return $this.tipo
    }

    [float]getPotencia() {
        return $this.potencia
    }

    [int]getAno() {
        return $this.ano
    }

    [bool]getLigado() {
        return $this.ligado
    }

    [bool]getEngatado() {
        return $this.engatado
    }

    [void]setModelo([string]$modelo) {
        $this.modelo = $modelo
    }

    [void]setTipo([string]$tipo) {
        $this.tipo = $tipo
    }

    [void]setPotencia([float]$potencia) {
        $this.potencia = $potencia
    }

    [void]setAno([int]$ano) {
        $this.ano = $ano
    }

    [void]setLigado([bool]$ligado) {
        $this.ligado = $ligado
    }

    [void]setEngatado([bool]$engatado) {
        $this.engatado = $engatado
    }
}

class Carro : Veiculo {
    Carro([string]$modelo, [string]$tipo, [float]$potencia, [int]$ano) : base($modelo, $tipo, $potencia, $ano) {

    }
}

class Moto : Veiculo {
    Moto([string]$modelo, [string]$tipo, [float]$potencia, [int]$ano) : base($modelo, $tipo, $potencia, $ano) {
        
    }

    [void]engatarRe([char]$r) {
        if([char]::ToUpper($r) -eq 'R') {
            Write-Host "Moto não tem ré! Empurre a moto!"
        }
        else {
            Write-Host "Não é possível engatar essa marcha no" $this.GetType().Name.ToLower() $this.modelo "."
        }
    }
}

class Caminhao : Veiculo {
    Caminhao([string]$modelo, [string]$tipo, [float]$potencia, [int]$ano) : base($modelo, $tipo, $potencia, $ano) {
        
    }
}