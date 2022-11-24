class Valor {
    hidden [float]$vale
    hidden [string]$tipo

    [void]apresentacao() {
        throw "Implemente o método `"apresentação`!"
    }

    Valor([float]$vale, [string]$tipo) {
        $this.vale = $vale
        $this.tipo = $tipo
    }

    [float]getVale() {
        return $this.vale
    }

    [string]getTipo() {
        return $this.tipo
    }

    [void]setVale([float]$vale) {
        $this.vale = $vale
    }

    [void]setTipo([string]$tipo) {
        $this.tipo = $tipo
    }
}

class Dinheiro : Valor {
    [void]apresentacao() {
        Write-Host ([string]::Format("A {0} tem o valor de R`${1}.", $this.getTipo(), $this.getVale()))
    }

    Dinheiro([float]$vale, [string]$tipo) : base($vale, $tipo) {

    }
}

class Guardado {
    [void]depositar([Valor]$vl) {
        throw "Implemente o método `"depositar`"!"
    }

    [void]retirar([float]$qt) {
        throw "Implemente o método `"retirar`"!"
    }

    [void]verificar() {
        throw "Implemente o método `"verificar`"!"
    }
}

class Cofre : Guardado {
    hidden [float]$total
    
    [void]depositar([Valor]$vl) {
        if($vl.getVale() -ge 0) {
            $this.total += $vl.getVale()

            Write-Host ([string]::Format("Foi depositada no cofra a quantia de R`${0:0.00}.", $vl.getVale()))
        }
        else {
            Write-Host "Não é possível depositar esse valor no cofre!"
        }
    }

    [void]retirar([float]$qt) {
        if($qt -ge 0) {
            if($qt -gt $this.total) {
                Write-Host ([string]::Format("Foi retirada dno cofra a quantia de R`${0:0.00}.", $this.total))
            
                $this.total -= $this.total
            }
            else {
                Write-Host ([string]::Format("Foi retirada do cofra a quantia de R`${0:0.00}.", $qt))
            
                $this.total -= $qt
            }
        }
        else {
            Write-Host "Não é retirar esse valor do cofre!"
        }
    }

    [void]verificar() {
        Write-Host ([string]::Format("O valor total dentro do cofre é de R`${0:0.00}.", $this.total))
    }

    Cofre()  {
        $this.total = 0
    }

    [float]getTotal() {
        return $this.total
    }

    [void]setTotal([float]$total) {
        $this.total = $total
    }
}