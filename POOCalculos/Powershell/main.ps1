. "$PSScriptRoot\classes.ps1"


$num = [int](Read-Host "Digite um número inteiro")

try {
    Write-Host ([string]::Format("Quadrado de {0}: {1}.", $num, [Calculos]::quadrado($num)))
    Write-Host ([string]::Format("Cubo de {0}: {1}.", $num, [Calculos]::cubo($num)))
    Write-Host ([string]::Format("Fatorial de {0}: {1}.", $num, [Calculos]::fatorial($num)))
    Write-Host ([string]::Format("Fibonacci de {0}: {1}.", $num, [Calculos]::fibonacci($num)))
}
catch [Exception] {
    Write-Host "ERRO:" $_.Exception.Message
}