// Abstrata
class Produto {
    constructor(nome, editora, totPaginas) {
        this._nome = nome; // String
        this._editora = editora; // String
        this._totPaginas = totPaginas; // Integer
        this._pagAtual = 1; // Integer
        this._aberto = false; // Boolean
    }

    avancarPag() {
        if(this._aberto) {
            if(this._pagAtual < this._totPaginas) {
                this._pagAtual++;

                document.write(`A página atual do ${this.constructor.name.toLowerCase()} ${this._nome} é ${this._pagAtual}.<br/>`);
            }
            else {
                document.write(`Esta é a última página do ${this.constructor.name.toLowerCase()} ${this._nome}!<br/>`);
            }
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._nome} está fechado no momento!<br/>`);
        }
    }

    voltarPag() {
        if(this._aberto) {
            if(this._pagAtual > 1) {
                this._pagAtual--;

                document.write(`A página atual do ${this.constructor.name.toLowerCase()} ${this._nome} é ${this._pagAtual}.<br/>`);
            }
            else {
                document.write(`Esta é a primeira página do ${this.constructor.name.toLowerCase()} ${this._nome}!<br/>`);
            }
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._nome} está fechado no momento!<br/>`);
        }
    }

    folhear(p) {
        if(this._aberto) {
            if(p < this._totPaginas && p > 1) {
                this._pagAtual = p;

                document.write(`A página atual do ${this.constructor.name.toLowerCase()} ${this._nome} é ${this._pagAtual}.<br/>`);
            }
            else {
                document.write(`Essa página do ${this.constructor.name.toLowerCase()} ${this._nome} não existe!<br/>`);
            }
        }
        else {
            document.write(`O ${this.constructor.name.toLowerCase()} ${this._nome} está fechado no momento!<br/>`);
        }
    }

    abrir() {
        if(!this._aberto) {
            this._aberto = true;
        }

        document.write(`O ${this.constructor.name.toLowerCase()} ${this._nome} está aberto!<br/>`); 
    }

    fechar() {
        if(this._aberto) {
            this._aberto = false;
        }
        
        document.write(`O ${this.constructor.name.toLowerCase()} ${this._nome} está fechado!<br/>`); 
    }

    // Virtual
    apresentacao() {
        document.write("<hr/>");
        document.write(`Nome do ${this.constructor.name.toLowerCase()}: ${this._nome}, da editora ${this._editora}.<br/>`);
        document.write(`O produto tem ${this._totPaginas} páginas e a atual é a ${this._pagAtual}.<br/>`);
        document.write(`Ele está aberto? ${this._aberto ? "Sim" : "Não"}.<br/>`);
    }

    get nome() {
        return this._nome;
    }

    get editora() {
        return this._editora;
    }

    get totPaginas() {
        return this._totPaginas;
    }

    get pagAtual() {
        return this._pagAtual;
    }

    get aberto() {
        return this._aberto;
    }

    set nome(value) {
        this._nome = value;
    }

    set editora(value) {
        this._editora = value;
    }

    set totPaginas(value) {
        this._totPaginas = value;
    }

    set pagAtual(value) {
        this._pagAtual = value;
    }

    set aberto(value) {
        this._aberto = value;
    }
}

class Revista extends Produto {
    constructor(nome, editora, totPaginas, numero) {
        super(nome, editora, totPaginas);

        this._numero = numero; // Integer
    }

    // Override
    apresentacao() {
        super.apresentacao();

        document.write(`O número da revista é ${this._numero}.<br/>`);
    }

    get numero() {
        return this._numero;
    }

    set numero(value) {
        this._numero = value;
    }
}

// Herda de Revista
class Hq extends Revista {
    constructor(nome, editora, totPaginas, numero) {
        super(nome, editora, totPaginas, numero);
    }
}

// Herdam de Produto
class Jornal extends Produto {
    constructor(nome, editora, totPaginas, diario) {
        super(nome, editora, totPaginas);

        this._diario = diario;
    }

    // Override
    apresentacao() {
        super.apresentacao();

        document.write(`O jornal é diário? ${this._diario ? "Sim" : "Não"}.<br/>`);
    }

    get diario() {
        return this._diario;
    }

    set diario(value) {
        this._diario = value;
    }
}

class Livro extends Produto {
    constructor(nome, editora, totPaginas) {
        super(nome, editora, totPaginas);
    }
}

// Interface
class Ponto {
    // Virtual
    apresentacao() {
        throw new Error("Implemente o método \"apresentacao\"!");
    }
}

// Implementa
class Banca extends Ponto {
    // Sobrecarga
    constructor(prod1, prod2 = null, prod3 = null, prod4 = null, prod5 = null) {
        super();
        this._prod1 = prod1; // Tudo tipo Produto
        this._prod2 = prod2;
        this._prod3 = prod3;
        this._prod4 = prod4;
        this._prod5 = prod5;
    }

    // Override
    apresentacao() {
        document.write("Os produtos da banca são:");
        
        // Ifs independentes:
        if(this._prod1 != null) {
            this._prod1.apresentacao();
        }

        if(this._prod2 != null) {
            this._prod2.apresentacao();
        }

        if(this._prod3 != null) {
            this._prod3.apresentacao();
        }

        if(this._prod4 != null) {
            this._prod4.apresentacao();
        }

        if(this._prod5 != null) {
            this._prod5.apresentacao();
        }
    }

    get prod1() {
        return this._prod1;
    }

    get prod2() {
        return this._prod2;
    }

    get prod3() {
        return this._prod3;
    }

    get prod4() {
        return this._prod4;
    }

    get prod5() {
        return this._prod5;
    }

    set prod1(value) {
        this._prod1 = value;
    }

    set prod2(value) {
        this._prod2 = value;
    }

    set prod3(value) {
        this._prod3 = value;
    }

    set prod4(value) {
        this._prod4 = value;
    }

    set prod5(value) {
        this._prod5 = value;
    }
}