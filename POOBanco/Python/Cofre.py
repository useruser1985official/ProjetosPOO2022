from Guardado import Guardado

class Cofre(Guardado):
    __total = 0.0

    def depositar(self, vl):
        if vl.getVale() >= 0:
            self.__total += vl.getVale()

            print("Foi depositada no cofre a quantia de R$%.2f." % vl.getVale())
        else:
            print("Não é possível depositar esse valor no cofre!")

    def retirar(self, qt):
        if qt >= 0:
            if qt > self.__total:
                print("Foi retirada do cofre a quantia de R$%.2f." % self.__total)

                self.__total -= self.__total
            else:
                print("Foi retirada do cofre a quantia de R$%.2f." % self.__total)

                self.__total -= qt
        else:
            print("Não é possível retirar esse valor do cofre!")

    def verificar(self):
        print("O valor total dentro do cofre é de R$%.2f." % self.__total)

    def __init__(self):
        self.__total = 0

    def __del__(self):
        print("Objeto Cofre Destruído com Sucesso!")

    def getTotal(self):
        return self.__total

    def setTotal(self, total):
        self.__total = total