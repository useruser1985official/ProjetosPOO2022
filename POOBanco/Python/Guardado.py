from Dinheiro import Dinheiro
from abc import ABC, abstractmethod

class Guardado(ABC):
    @abstractmethod
    def depositar(self, vl):
        pass

    @abstractmethod
    def retirar(self, qt):
        pass

    @abstractmethod
    def verificar(self):
        pass