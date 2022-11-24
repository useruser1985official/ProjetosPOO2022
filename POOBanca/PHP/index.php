<!DOCTYPE html>
    <html lang="pt-br">
    <head>
        <meta charset="UTF-8"/>
        <title>POO Banca</title>
    </head>
    <body>
        <?php
            require_once "Revista.php";
            require_once "Hq.php";
            require_once "Jornal.php";
            require_once "Livro.php";
            require_once "Banca.php";

            // Todas tipo Produto:

            $veja = new Revista("Veja", "Abril", 200, 2564);
            $caras = new Revista("Caras", "Abril", 250, 1948);

            $veja->abrir();
            $veja->avancarPag();
            $veja->voltarPag();
            $veja->folhear(50);
            // $veja->apresentacao();

            $superman = new Hq("Superman", "Panini", 96, 47);
            $batman = new Hq("Batman", "Panini", 96, 47);
            $liga = new Hq("Liga da Justiça", "Panini", 96, 47);

            // $superman->apresentacao();
            // $batman->apresentacao();

            $dgabc = new Jornal("Diário do Grande ABC", "DGABC", 300, true);
            $folha = new Jornal("Folha de São Paulo", "Grupo Folha", 400, true);

            // $dgabc->apresentacao();

            $inic = new Livro("PHP para Iniciantes", "Tecno", 250);
            $objet = new Livro("Orientação a Objetos em PHP", "Tecno", 300);
            $avanc = new Livro("PHP Avançado", "Tecno", 400);

            // $inic->apresentacao();
            // $objet->apresentacao();

            echo "<hr/>";

            // Tipo Ponto
            $banc = new Banca($veja, $superman, $dgabc, $folha, $objet);

            $banc->apresentacao();

            unset($veja);
            unset($caras);
            unset($superman);
            unset($batman);
            unset($liga);
            unset($dgabc);
            unset($folha);
            unset($inic);
            unset($objet);
            unset($avanc);
            unset($banc);
        ?>
    </body>
</html>