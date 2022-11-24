// Classe Abstrata
class Valor {
    constructor(vale, tipo) {
        this._vale = vale;
        this._tipo = tipo;
    }

    // Abstrata
    apresentacao() {
        throw new Error("Implemente o método \"apresentacao\"!");
    }

    get vale() {
        return this._vale;
    }

    get tipo() {
        return this._tipo;
    }

    set vale(value) {
        this._vale = value;
    }

    set tipo(value) {
        this._tipo = value;
    }
}

class Dinheiro extends Valor {
    constructor(vale, tipo) {
        super(vale, tipo);
    }

    // Override
    apresentacao() {
        document.write(`A ${this.tipo} tem o valor de R\$${this.vale}.<br/>`);
    }
}

// Interface (todos abstratos)
class Guardado {
    depositar(vl) { // Objeto Valor
        throw new Error("Implemente o método \"depositar\"!");
    }

    retirar(qt) { // Float
        throw new Error("Implemente o método \"retirar\"!");
    }

    verificar() {
        throw new Error("Implemente o método \"verificar\"!");
    }
}

// Implementa
class Cofre extends Guardado {
    constructor() {
        super();
        this._total = 0;
    }
    
    // Override
    depositar(vl) { // Objeto Valor
        if(vl.vale >= 0) {
            this._total += vl.vale;

            document.write(`Foi depositada no cofre a quantia de R\$${vl.vale}.<br/>`);
        }
        else {
            document.write("Não é possível depositar esse valor no cofre!<br/>");
        }
    }

    // Override
    retirar(qt) { // float
        if(qt >= 0) {
            if(qt > this._total) {
                document.write(`Foi retirada do cofre a quantia de R\$${this._total}.<br/>`);
                
                this._total -= this._total;
            }
            else {
                document.write(`Foi retirada do cofre a quantia de R\$${qt}.<br/>`);
                
                this._total -= qt;
            }
        }
        else {
            document.write("Não é possível retirar esse valor do cofre!<br/>");
        }
    }

    // Override
    verificar() {
        document.write(`O valor total dentro do cofre é de R\$${this._total}.<br/>`);
    }

    get total() {
        return this._total;
    }

    set total(value) {
        this._total = value;
    }
}