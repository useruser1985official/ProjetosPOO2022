. "$PSScriptRoot\classes.ps1"

$veja = [Revista]::new("Veja", "Abril", 200, 2564)
$caras = [Revista]::new("Caras", "Abril", 250, 1948)

$veja.abrir();
$veja.avancarPag()
$veja.voltarPag()
$veja.folhear(50)
# $veja.apresentacao()

$superman = [Hq]::new("Superman", "Panini", 96, 47)
$batman = [Hq]::new("Batman", "Panini", 96, 47)
$liga = [Hq]::new("Liga da Justiça", "Panini", 96, 47)

# $superman.apresentacao()
# $batman.apresentacao()

$dgabc = [Jornal]::new("Diário do Grande ABC", "DGABC", 300, $true)
$folha = [Jornal]::new("Folha de São Paulo", "Grupo Folha", 400, $true)

# $dgabc.apresentacao()

$inic = [Livro]::new("Powershell para Iniciantes", "Tecno", 250)
$objet = [Livro]::new("Orientação a Objetos em Powershell", "Tecno", 300)
$avanc = [Livro]::new("Powershell Avançado", "Tecno", 400)

# $inic.apresentacao()
# $objet.apresentacao()

Write-Host "--------------------------------------------------------------------------------------------------------"

$banc = [Banca]::new($veja, $superman, $dgabc, $folha, $objet)

$banc.apresentacao()