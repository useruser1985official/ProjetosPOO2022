from abc import ABC, abstractmethod

class Produto(ABC):
    __nome = ""
    __editora = ""
    __totPaginas = 0
    __pagAtual = 0
    __aberto = False

    def avancarPag(self):
        if self.__aberto:
            if self.__pagAtual < self.__totPaginas:
                self.__pagAtual += 1

                print("A página atual do {} {} é {}.".format(self.__class__.__name__.lower(), self.__nome,
                                                             self.__pagAtual))
            else:
                print("Esta é a última página do {} {}.".format(self.__class__.__name__.lower(), self.__nome))
        else:
            print("O {} {} está fechado no momento!".format(self.__class__.__name__.lower(), self.__nome))

    def voltarPag(self):
        if self.__aberto:
            if self.__pagAtual > 1:
                self.__pagAtual -= 1

                print("A página atual do {} {} é {}.".format(self.__class__.__name__.lower(), self.__nome,
                                                             self.__pagAtual))
            else:
                print("Esta é a primeira página do {} {}.".format(self.__class__.__name__.lower(), self.__nome))
        else:
            print("O {} {} está fechado no momento!".format(self.__class__.__name__.lower(), self.__nome))

    def folhear(self, p):
        if self.__aberto:
            if p < self.__totPaginas and p > 1:
                self.__pagAtual = p

                print("A página atual do {} {} é {}.".format(self.__class__.__name__.lower(), self.__nome,
                                                             self.__pagAtual))
            else:
                print("Esta página do {} {} não existe.".format(self.__class__.__name__.lower(), self.__nome))
        else:
            print("O {} {} está fechado no momento!".format(self.__class__.__name__.lower(), self.__nome))

    def abrir(self):
        if not self.__aberto:
            self.__aberto = True

        print("O {} {} está aberto!".format(self.__class__.__name__.lower(), self.__nome))

    def fechar(self):
        if self.__aberto:
            self.__aberto = False

        print("O {} {} está fechado!".format(self.__class__.__name__.lower(), self.__nome))

    def apresentacao(self):
        print("-" * 50)
        print("Nome do {}: {} da editora {}.".format(self.__class__.__name__.lower(), self.__nome, self.__editora))
        print("O produto tem {} páginas e a atual é a {}.".format(self.__totPaginas, self.__pagAtual))
        print("Ele está aberto? {}.".format("Sim" if self.__aberto else "Não"))

    def __init__(self, nome, editora, totPaginas):
        self.__nome = nome
        self.__editora = editora
        self.__totPaginas = totPaginas
        self.__pagAtual = 1
        self.__aberto = False

    def __del__(self):
        print("Objeto Produto Destruído com Sucesso!")

    def getNome(self):
        return self.__nome

    def getEditora(self):
        return self.__editora

    def getTotPaginas(self):
        return self.__totPaginas

    def getPagAtual(self):
        return self.__pagAtual

    def getAberto(self):
        return self.__aberto

    def setNome(self, nome):
        self.__nome = nome

    def setEditora(self, editora):
        self.__editora = editora

    def setTotPaginas(self, totPaginas):
        self.__totPaginas = totPaginas

    def setPagAtual(self, pagAtual):
        self.__pagAtual = pagAtual

    def setAberto(self, aberto):
        self.__aberto = aberto