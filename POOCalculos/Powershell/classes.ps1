class Calculos {
    static [int]quadrado([int]$num) {
        if($num -le 0) {
            throw "Insira um valor maior que zero!"
        }

        return $num * $num
    }
    
    static [int]cubo([int]$num) {
        if($num -le 0) {
            throw "Insira um valor maior que zero!"
        }

        return $num * $num * $num
    }
    
    static [string]fatorial([int]$num) {
        if($num -le 0) {
            throw "Insira um valor maior que zero!"
        }

        $fat = 1
        $saida = ""

        while($num -ge 1) {
            $fat *= $num

            $saida += $num

            if($num -gt 1) {
                $saida += " x "
            }
            else {
                $saida += " = "
            }

            $num--
        }

        $saida += $fat

        return $saida
    }
    
    static [string]fibonacci([int]$num) {
        if($num -le 0) {
            throw "Insira um valor maior que zero!"
        }

        $t1 = 0
        $t2 = 1
        $t3 = 0
        $cont = 3

        $said = [string]::Format("{0} → {1}", $t1, $t2)

        while($cont -le $num) {
            $t3 = $t1 + $t2
            $said += [string]::Format(" → {0}", $t3)
            $t1 = $t2
            $t2 = $t3
            $cont++
        }

        $said += " → FIM"

        return $said
    }
}