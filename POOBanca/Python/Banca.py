from Produto import Produto
from Ponto import Ponto

class Banca(Ponto):
    __prod1 = None
    __prod2 = None
    __prod3 = None
    __prod4 = None
    __prod5 = None

    def apresentacao(self):
        print("Os produtos da banca são:")

        if self.__prod1 is not None:
            self.__prod1.apresentacao()

        if self.__prod2 is not None:
            self.__prod2.apresentacao()

        if self.__prod3 is not None:
            self.__prod3.apresentacao()

        if self.__prod4 is not None:
            self.__prod4.apresentacao()

        if self.__prod5 is not None:
            self.__prod5.apresentacao()

    def __init__(self, prod1, prod2 = None, prod3 = None, prod4 = None, prod5 = None):
        self.__prod1 = prod1
        self.__prod2 = prod2
        self.__prod3 = prod3
        self.__prod4 = prod4
        self.__prod5 = prod5

    def __del__(self):
        del self.__prod1
        del self.__prod2
        del self.__prod3
        del self.__prod4
        del self.__prod5

        print("Objeto Banca Destruído com Sucesso!")

    def getProd1(self):
        return self.__prod1

    def getProd2(self):
        return self.__prod2

    def getProd3(self):
        return self.__prod3

    def getProd4(self):
        return self.__prod4

    def getProd5(self):
        return self.__prod5

    def setProd1(self, prod1):
        self.__prod1 = prod1

    def setProd2(self, prod2):
        self.__prod2 = prod2

    def setProd3(self, prod3):
        self.__prod3 = prod3

    def setProd4(self, prod4):
        self.__prod4 = prod4

    def setProd5(self, prod5):
        self.__prod5 = prod5