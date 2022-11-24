<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8"/>
        <title>POO Banco</title>
    </head>
    <body>
        <?php
            require_once "Cofre.php";

            // Todas tipo Valor
            $moeda25Cent = new Dinheiro(0.25, "moeda");
            $moeda1Real = new Dinheiro(1.00, "moeda");
            $nota5Reais = new Dinheiro(5.00, "nota");

            $moeda25Cent->apresentacao();
            $moeda1Real->apresentacao();
            $nota5Reais->apresentacao();

            // Tipo Guardado
            $cof = new Cofre();

            $cof->depositar($moeda25Cent);
            $cof->depositar($nota5Reais);
            $cof->retirar(5.00);
            $cof->verificar();

            unset($moeda25Cent);
            unset($moeda1Real);
            unset($nota5Reais);
            unset($cof);
        ?>
    </body>
</html>