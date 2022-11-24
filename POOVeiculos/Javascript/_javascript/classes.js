// Abstrata
class Veiculo {
    constructor(modelo, tipo, potencia, ano) {
        this._modelo = modelo; // string
        this._tipo = tipo; // string
        this._potencia = potencia; // float
        this._ano = ano; // int
        this._ligado = false; // boolean
        this._engatado = false; // boolean
    }

    ligar() {
        if(!this._ligado) {
            this._ligado = true;

            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está sendo ligado!<br/>`);
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} já está ligado!<br/>`);
        }
    }

    desligar() {
        if(this._ligado) {
            this._ligado = false;

            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está sendo desligado!<br/>`);
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} já está desligado!<br/>`);
        }
    }
    
    andar() {
        if(this._ligado) {
            if(this._engatado) {
                document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está andando!<br/>`);
            }
            else {
                document.write(`Engate a marcha do ${this.constructor.name.toLowerCase()} ${this._modelo} pra andar com ele!<br/>`);
            }
        }
        else {
            document.write(`Ligue o ${this.constructor.name.toLowerCase()} ${this._modelo} para andar com ele!<br/>`);
        }
    }

    parar() {
        if(this._ligado) {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está sendo parado!<br/>`);
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está desligado, portanto, está parado!<br/>`);
        }
    }

    virarEsquerda() {
        document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está virando à esquerda!<br/>`);
    }

    virarDireita() {
        document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} está virando à direita!<br/>`);
    }

    engatar(m) {
        if(m >= 1 && m <= 5) {
            this._engatado = true;

            document.write(`${m}ª marcha do ${this.constructor.name.toLowerCase()} ${this._modelo} engatada!<br/>`);
        }
        else {
            document.write(`Não é possível engatar essa marcha no ${this.constructor.name.toLowerCase()} ${this._modelo}.<br/>`);
        }
    }

    // Virtual
    engatarRe(r) {
        if(r.toUpperCase().charAt(0) == "R") {
            this._engatado = true;

            document.write(`Marcha à ré do ${this.constructor.name.toLowerCase()} ${this._modelo} engatada!<br/>`);
        }
        else {
            document.write(`Não é possível engatar essa marcha no ${this.constructor.name.toLowerCase()} ${this._modelo}.<br/>`);
        }
    }

    engatarNeutro() {
        if(this._engatado) {
            this.engatado = false;

            document.write(`${this.constructor.name} ${this._modelo} desengatado!<br/>`);
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._modelo} já está desengatado!.<br/>`);
        }
    }

    apresentacao() {
        document.write(`O ${this.constructor.name.toLowerCase()} é do modelo ${this._modelo} e do tipo ${this._tipo}.<br/>`);
        document.write(`A potência dele é de ${this._potencia} e o ano é de ${this._ano}.<br/>`);
        document.write("<hr/>");
    }

    get modelo() {
        return this._modelo;
    }

    get tipo() {
        return this._tipo;
    }

    get potencia() {
        return this._potencia;
    }

    get ano() {
        return this._ano;
    }

    get ligado() {
        return this._ligado;
    }

    get engatado() {
        return this._engatado;
    }

    set modelo(value) {
        this._modelo = value;
    }

    set tipo(value) {
        this._tipo = value;
    }

    set potencia(value) {
        this._potencia = value;
    }

    set ano(value) {
        this._ano = value;
    }

    set ligado(value) {
        this._ligado = value;
    }

    set engatado(value) {
        this._engatado = value;
    }
}

class Carro extends Veiculo {
    constructor(modelo, tipo, potencia, ano) {
        super(modelo, tipo, potencia, ano);
    }
}

class Moto extends Veiculo {
    constructor(modelo, tipo, potencia, ano) {
        super(modelo, tipo, potencia, ano);
    }

    // Override
    engatarRe(r) {
        if(r.toUpperCase().charAt(0) == "R") {
            document.write("Moto não tem ré! Empurre a moto!<br/>");
        }
        else {
            document.write(`Não é possível engatar essa marcha no ${this.constructor.name.toLowerCase()} ${this._modelo}.<br/>`);
        }
    }
}

class Caminhao extends Veiculo {
    constructor(modelo, tipo, potencia, ano) {
        super(modelo, tipo, potencia, ano);
    }
}