from Veiculo import Veiculo

class Moto(Veiculo):
    def engatarRe(self, r):
        if r.upper() == "R":
            print("Moto não tem ré! Empurre a moto!")
        else:
            print("Não é possível engatar essa marcha no {} {}.".format(self.__class__.__name__.lower(), self.__modelo))

    def __init__(self, modelo, tipo, potencia, ano):
        super().__init__(modelo, tipo, potencia, ano)

    def __del__(self):
        print("Objeto Moto Destruído com Sucesso!")