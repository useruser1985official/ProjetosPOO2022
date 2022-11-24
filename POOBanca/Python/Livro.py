from Produto import Produto

class Livro(Produto):
    def __init__(self, nome, editora, totPaginas):
        super().__init__(nome, editora, totPaginas)

    def __del__(self):
        print("Objeto Livro Destruído com Sucesso!")