// Interface
class Loteria {
    fazerAposta(aposta) { // List Integer
        throw new Error("Implemente o método \"fazerAposta\"!");
    }

    sorteio() {
        throw new Error("Implemente o método \"sorteio\"!");
    }
}

// Implementa
class Jogo extends Loteria {
    constructor(quantNum, quantResul, miniCart, maxiCart, faixas) {
        super();
        this._quantNum = quantNum; // Integer
        this._quantResul = quantResul; // Integer
        this._miniCart = miniCart; // Integer
        this._maxiCart = maxiCart; // Integer
        this._faixas = faixas; // List Integer
        this._aposta = []; // List Integer
        this._invalida = false; // Boolean
    }
    
    // Override
    fazerAposta(aposta) { // List Integer
        this._aposta = aposta;

        if(this._aposta[this._aposta.length - 1] <= this._maxiCart && this._quantNum == this._aposta.length) {
            document.write("Os números apostados são: ");

            for(let i = 0; i < this._aposta.length - 1; i++) {
                document.write(`${this._aposta[i]} `);
            }

            document.write(`${this._aposta[this._aposta.length - 1]}.<br/>`);
        }
        else {
            document.write("Aposta inválida!<br/>");
            this._invalida = true;
        }
    }

    // Override
    sorteio() {
        if(!this._invalida) {
            let num;
            let sorte = [];
            let cont = 0;
            
            while(cont < this._quantResul) {
                num = Math.round(Math.random() * (this._maxiCart - this._miniCart) + this._miniCart);
                
                if(!sorte.includes(num)) {
                    sorte.push(num);
                    cont++;
                }
            }

            let ord = (a, b) => a - b;

            sorte.sort(ord);

            document.write("Números sorteados: ");

            for(let i = 0; i < this._quantResul - 1; i++) {
                document.write(`${sorte[i]} `);
            }

            document.write(`${sorte[this._quantResul - 1]}.<br/>`);

            let acertos = 0;
            let numCert = [];
            cont = 0;

            while(cont < this._quantResul) {
                if(this._aposta.includes(sorte[cont])) {
                    numCert.push(sorte[cont]);
                    acertos++;
                }
                cont++;
            }

            if(numCert.length > 0) {
                document.write(`Você acertou ${acertos} números que foram: `);

                for(let i = 0; i < numCert.length - 1; i++) {
                    document.write(`${numCert[i]} `);
                }

                document.write(`${numCert[numCert.length - 1]}`);

                if(this._faixas.includes(acertos)) {
                    document.write(` e acertou a faixa de ${acertos} pontos!<br/>`);
                }
                else {
                    document.write("!<br/>");
                }
            }
            else {
                document.write("Você não acertou nenhum número!<br/>");
            }
        }
        else {
            document.write("Sorteio inválido!<br/>");
        }
    }

    get quantNum() {
        return this._quantNum;
    }

    get quantResul() {
        return this._quantResul;
    }

    get miniCart() {
        return this._miniCart;
    }

    get maxiCart() {
        return this._maxiCart;
    }

    get aposta() {
        return this._aposta;
    }

    get invalida() {
        return this._invalida;
    }

    set quantNum(value) {
        this._quantNum = value;
    }

    set quantResul(value) {
        this._quantResul = value;
    }

    set miniCart(value) {
        this._miniCart = value;
    }

    set maxiCart(value) {
        this._maxiCart = value;
    }

    set aposta(value) {
        this._aposta = value;
    }

    set invalida(value) {
        this._invalida = value;
    }
}