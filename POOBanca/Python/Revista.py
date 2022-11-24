from Produto import Produto

class Revista(Produto):
    __numero = 0

    def apresentacao(self):
        super().apresentacao()

        print("O número da revista é {}.".format(self.__numero))

    def __init__(self, nome, editora, totPaginas, numero):
        super().__init__(nome, editora, totPaginas)

        self.__numero = numero

    def __del__(self):
        print("Objeto Revista Destruído com Sucesso!")

    def getNumero(self):
        return self.__numero

    def setNumero(self, numero):
        self.__numero = numero