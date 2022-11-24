. "$PSScriptRoot\classes.ps1"

function linha() {
    Write-Host "---------------------------------------------------------------------------------------------------------"
}

$faiLoto = [System.Collections.ArrayList]@(11, 12, 13, 14, 15)
$lotofacil = [Jogo]::new(15, 15, 01, 25, $faiLoto)
$apLoto = [System.Collections.ArrayList]@(01, 03, 04, 06, 08, 09, 10, 11, 12, 15, 17, 18, 21, 23, 25)

$lotofacil.fazerAposta($apLoto)
$lotofacil.sorteio()

linha

$faiQui = [System.Collections.ArrayList]@(02, 03, 04, 05)
$quina = [Jogo]::new(05, 05, 01, 80, $faiQui)
$apQui = [System.Collections.ArrayList]@(05, 20, 23, 53, 80)

$quina.fazerAposta($apQui)
$quina.sorteio()

linha

$faiSe = [System.Collections.ArrayList]@(04, 05, 06)
$mega = [Jogo]::new(06, 06, 01, 60, $faiSe)
$apSe = [System.Collections.ArrayList]@(10, 24, 30, 36, 51, 53)

$mega.fazerAposta($apSe)
$mega.sorteio()