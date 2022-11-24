. "$PSScriptRoot\classes.ps1"

$moeda25Cent = [Dinheiro]::new(0.25, "moeda")
$moeda1Real = [Dinheiro]::new(1.00, "moeda")
$nota5Reais = [Dinheiro]::new(5.00, "nota")

$moeda25Cent.apresentacao()
$moeda1Real.apresentacao()
$nota5Reais.apresentacao()

$cof = [Cofre]::new()

$cof.depositar($moeda25Cent)
$cof.depositar($nota5Reais)
$cof.retirar(5.00)
$cof.verificar()