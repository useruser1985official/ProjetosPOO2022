<!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8"/>
        <title>POO Calculos</title>
    </head>
    <body>
        <?php
            require_once "Calculos.php";

            $num = (int)$_GET["n"];

            try {
                echo "Quadrado de $num: " . Calculos::quadrado($num) . ".<br/>";
                echo "Cubo de $num: " . Calculos::cubo($num) . ".<br/>";
                echo "Fatorial de $num: " . Calculos::fatorial($num) . ".<br/>";
                echo "Fibonacci de $num: " . Calculos::fibonacci($num) . ".<br/>";
            }
            catch(Exception $ex) {
                echo "ERRO: {$ex->getMessage()}<br/>";
            }
        ?>
    </body>
</html>