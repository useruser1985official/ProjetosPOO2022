from abc import ABC, abstractmethod

class Valor(ABC):
    __vale = 0.0
    __tipo = ""

    @abstractmethod
    def apresentacao(self):
        pass

    def __init__(self, vale, tipo):
        self.__vale = vale
        self.__tipo = tipo

    def __del__(self):
        print("Objeto Valor Destruído com Sucesso!")

    def getVale(self):
        return self.__vale

    def getTipo(self):
        return self.__tipo

    def setVale(self, vale):
        self.__vale = vale

    def setTipo(self, tipo):
        self.__tipo = tipo