from Valor import Valor

class Dinheiro(Valor):
    def apresentacao(self):
        print("A %s tem o valor de R$%.2f." % (self.getTipo(), self.getVale()))

    def __init__(self, vale, tipo):
        super().__init__(vale, tipo)

    def __del__(self):
        print("Objeto Dinheiro Destruído com Sucesso!")