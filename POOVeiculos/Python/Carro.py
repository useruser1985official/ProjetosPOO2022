from Veiculo import Veiculo

class Carro(Veiculo):
    def __init__(self, modelo, tipo, potencia, ano):
        super().__init__(modelo, tipo, potencia, ano)

    def __del__(self):
        print("Objeto Carro Destruído com Sucesso!")