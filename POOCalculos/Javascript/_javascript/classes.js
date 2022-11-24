class Calculos {
    static quadrado(num) { // Integer
        if(num <= 0) {
            throw new Error("Insira um valor maior que zero!");
        }

        return num * num;
    }

    static cubo(num) { // Integer
        if(num <= 0) {
            throw new Error("Insira um valor maior que zero!");
        }

        return num * num * num;
    }

    static fatorial(num) { // String
        if(num <= 0) {
            throw new Error("Insira um valor maior que zero!");
        }

        var fat = 1;
        var saida = "";

        while(num >= 1) {
            fat *= num;

            saida += `${num}`;

            saida += num > 1 ? " x " : " = ";

            num--;
        }

        saida += fat;

        return saida;
    }

    static fibonacci(num) { // String
        if(num <= 0) {
            throw new Error("Insira um valor maior que zero!");
        }

        var t1 = 0;
        var t2 = 1;
        var t3 = 0;
        var cont = 3;

        var said = `${t1} → ${t2}`;

        while(cont <= num) {
            t3 = t1 + t2;
            said += ` → ${t3}`;
            t1 = t2;
            t2 = t3;
            cont++;
        }

        said += " → FIM";

        return said;
    }
}