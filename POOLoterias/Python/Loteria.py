from abc import ABC, abstractmethod

class Loteria(ABC):
    @abstractmethod
    def fazerAposta(self, aposta):
        pass

    @abstractmethod
    def sorteio(self):
        pass