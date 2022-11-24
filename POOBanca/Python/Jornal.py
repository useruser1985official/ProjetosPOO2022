from Produto import Produto

class Jornal(Produto):
    __diario = False

    def apresentacao(self):
        super().apresentacao()

        print("O jornal é diário? {}.".format("Sim" if self.__diario else "Não"))

    def __init__(self, nome, editora, totPaginas, diario):
        super().__init__(nome, editora, totPaginas)

        self.__diario = diario

    def __del__(self):
        print("Objeto Jornal Destruído com Sucesso!")

    def getDiario(self):
        return self.__diario

    def setDiario(self, diario):
        self.__diario = diario