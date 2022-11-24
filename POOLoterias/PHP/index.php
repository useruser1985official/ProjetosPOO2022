<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8"/>
        <title>POO Loterias</title>
    </head>
    <body>
        <?php
            require_once "Jogo.php";

            $linha = function(){echo "<hr/>";};

            // Todos tipo Loteria

            $faiLoto = array(11, 12, 13, 14, 15);
            $lotofacil = new Jogo(15, 15, 01, 25, $faiLoto);
            $apLoto = array(1, 3, 4, 6, 8, 9, 10, 11, 12, 15, 17, 18, 21, 23, 25);

            $lotofacil->fazerAposta($apLoto);
            $lotofacil->sorteio();

            $linha();

            $faiQui = array(2, 3, 4, 5);
            $quina = new Jogo(5, 5, 1, 80, $faiQui);
            $apQui = array(5, 20, 23, 53, 80);

            $quina->fazerAposta($apQui);
            $quina->sorteio();

            $linha();

            $faiSe = array(4, 5, 6);
            $mega = new Jogo(6, 6, 1, 60, $faiSe);
            $apSe = array(10, 24, 30, 36, 51, 53);

            $mega->fazerAposta($apSe);
            $mega->sorteio();

            unset($lotofacil);
            unset($quina);
            unset($mega);
        ?>
    </body>
</html>