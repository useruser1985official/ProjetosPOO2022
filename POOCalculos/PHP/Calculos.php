<?php
class Calculos {
    public static function quadrado($num) { // Integer
        if($num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }

        return $num * $num;
    }

    public static function cubo($num) { // Integer
        if($num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }

        return $num * $num * $num;
    }

    public static function fatorial($num) { // String
        if($num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }

        $fat = 1;
        $saida = "";

        while($num >= 1) {
            $fat *= $num;

            $saida .= "$num";

            $saida .= $num > 1 ? " x " : " = ";

            $num--;
        }

        $saida .= $fat;

        return $saida;
    }

    public static function fibonacci($num) { // String
        if($num <= 0) {
            throw new Exception("Insira um valor maior que zero!");
        }

        $t1 = 0;
        $t2 = 1;
        $t3 = 0;
        $cont = 3;

        $said = "$t1 → $t2";

        while($cont <= $num) {
            $t3 = $t1 + $t2;
            $said .= " → $t3";
            $t1 = $t2;
            $t2 = $t3;
            $cont++;
        }

        $said .= " → FIM";

        return $said;
    }
}