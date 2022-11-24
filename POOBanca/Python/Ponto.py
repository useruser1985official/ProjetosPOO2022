from abc import ABC, abstractmethod

class Ponto(ABC):
    @abstractmethod
    def apresentacao(self):
        pass