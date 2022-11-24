class Loteria {
    [void]fazerAposta($aposta) {
        throw "Implemente o método `"FazerAposta`"!"
    }

    [void]sorteio() {
        throw "Implemente o método `"sorteio`"!"
    }
}

class Jogo : Loteria {
    hidden [int]$quantNum
    hidden [int]$quantResul
    hidden [int]$miniCart
    hidden [int]$maxiCart
    hidden [System.Collections.ArrayList]$faixas
    hidden [System.Collections.ArrayList]$aposta
    hidden [bool]$invalida

    [void]fazerAposta($aposta) {
        $this.aposta = $aposta

        if($this.aposta[$this.aposta.Count - 1] -le $this.maxiCart -and $this.quantNum -eq $this.aposta.Count) {
            Write-Host -NoNewline "Os números apostados são: "

            for($i = 0; $i -lt $this.aposta.Count - 1; $i++) {
                Write-Host -NoNewline $this.aposta[$i] ""
            }

            Write-Host ([string]::Format("{0}.", $this.aposta[$this.aposta.Count - 1]))
        }
        else {
            Write-Host "Aposta inválida!"
            $this.invalida = $true
        }
    }

    [void]sorteio() {
        if(-not $this.invalida) {
            $num = 0
            $sorte = [System.Collections.ArrayList]::new()
            $cont = 0
            $ale = [Random]::new()

            while($cont -lt $this.quantResul) {
                $num = $ale.Next($this.miniCart, $this.maxiCart + 1)

                if(-not $sorte.Contains($num)) {
                    $sorte.Add($num)
                    $cont++
                }
            }

            $sorte.Sort()

            Write-Host -NoNewline "Números sorteados: "

            for($i = 0; $i -lt $this.quantResul - 1; $i++) {
                Write-Host -NoNewline $sorte[$i] ""
            }

            Write-Host ([string]::Format("{0}.", $sorte[$this.quantResul - 1]))

            $acertos = 0
            $numCert = [System.Collections.ArrayList]::new()
            $cont = 0

            while($cont -lt $this.quantResul) {
                if($this.aposta.Contains($sorte[$cont])) {
                    $numCert.Add($sorte[$cont])
                    $acertos++
                }
                $cont++
            }

            if($numCert -gt 0) {
                Write-Host -NoNewline "Você acertou $acertos números que foram: "

                for($i = 0; $i -lt $numCert.Count - 1; $i++) {
                    Write-Host -NoNewline $numCert[$i] ""
                }

                Write-Host -NoNewline $numCert[$numCert.Count - 1]

                if($this.faixas.Contains($acertos)) {
                    Write-Host " e acertou a faixa de $acertos pontos!"
                }
                else {
                    Write-Host "!"
                }
            }
            else {
                Write-Host "Você não acertou nenhum número!"
            }
        }
        else {
            Write-Host "Sorteio inválido!"
        }
    }

    Jogo([int]$quantNum, [int]$quantResul, [int]$miniCart, [int]$maxiCart, [int[]]$faixas) {
        $this.quantNum = $quantNum
        $this.quantResul = $quantResul
        $this.miniCart = $miniCart
        $this.maxiCart = $maxiCart
        $this.faixas = $faixas
        $this.invalida = $false
    }

    [int]getQuantNum() {
        return $this.quantNum
    }

    [int]getQuantResul() {
        return $this.quantResul
    }

    [int]getMiniCart() {
        return $this.miniCart
    }

    [int]getMaxiCart() {
        return $this.maxiCart
    }

    [System.Collections.ArrayList]getFaixas() {
        return $this.faixas
    }

    [System.Collections.ArrayList]getAposta() {
        return $this.aposta
    }

    [bool]getInvalida() {
        return $this.invalida
    }
    
    [void]setQuantNum([int]$quantNum) {
        $this.quantNum = $quantNum
    }

    [void]setQuantResul([int]$quantResul) {
        $this.quantResul = $quantResul
    }

    [void]setMiniCart([int]$miniCart) {
        $this.miniCart = $miniCart
    }

    [void]setMaxiCart([int]$maxiCart) {
        $this.maxiCart = $maxiCart
    }

    [void]setFaixas([System.Collections.ArrayList]$faixas) {
        $this.faixas = $faixas
    }

    [void]setAposta([System.Collections.ArrayList]$aposta) {
        $this.aposta = $aposta
    }

    [void]setInvalida([System.Collections.ArrayList]$invalida) {
        $this.invalida = $invalida
    }
}