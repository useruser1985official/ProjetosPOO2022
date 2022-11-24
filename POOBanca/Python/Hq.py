from Revista import Revista

class Hq(Revista):
    def __init__(self, nome, editora, totPaginas, numero):
        super().__init__(nome, editora, totPaginas, numero)

    def __del__(self):
        print("Objeto Hq Destruído com Sucesso!")