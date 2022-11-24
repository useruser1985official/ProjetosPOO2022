from Loteria import Loteria
from random import randint

class Jogo(Loteria):
    __quantNum = 0
    __quantResul = 0
    __miniCart = 0
    __maxiCart = 0
    __faixas = tuple()
    __aposta = tuple()
    __invalida = False

    def fazerAposta(self, aposta):
        self.__aposta = aposta

        if self.__aposta[len(self.__aposta) - 1] <= self.__maxiCart and self.__quantNum == len(self.__aposta):
            print("Os números apostados são: ", end = "")

            for i in range(0, len(self.__aposta) - 1, 1):
                print("{} ".format(self.__aposta[i]), end = "")

            print("{}.".format(self.__aposta[len(self.__aposta) - 1]))
        else:
            print("Aposta inválida!")
            self.__invalida = True

    def sorteio(self):
        if not self.__invalida:
            num = 0
            sorte = list()
            cont = 0

            while cont < self.__quantResul:
                num = randint(self.__miniCart, self.__maxiCart)

                if not num in sorte:
                    sorte.append(num)
                    cont += 1

            sorte.sort()

            print("Números sorteados: ", end = "")

            for i in range(0, self.__quantResul - 1, 1):
                print("{} ".format(sorte[i]), end = "")


            print("{}.".format(sorte[self.__quantResul - 1]))

            acertos = 0
            numCert = list()
            cont = 0

            while cont < self.__quantResul:
                if sorte[cont] in self.__aposta:
                    numCert.append(sorte[cont])
                    acertos += 1
                cont += 1

            if len(numCert) > 0:
                print("Você acertou {} números que foram: ".format(acertos), end = "")

                for i in range(0, len(numCert) - 1, 1):
                    print("{} ".format(numCert[i]), end = "")

                print(numCert[len(numCert) - 1], end = "")

                if acertos in self.__faixas:
                    print(" e acertou a faixa de {} pontos!".format(acertos))
                else:
                    print("!")
            else:
                print("Você não acertou nenhum número!")
        else:
            print("Sorteio inválido!")

    def __init__(self, quantNum, quantResul, miniCart, maxiCart, faixas):
        self.__quantNum = quantNum
        self.__quantResul = quantResul
        self.__miniCart = miniCart
        self.__maxiCart = maxiCart
        self.__faixas = faixas
        self.__invalida = False

    def __del__(self):
        print("Objeto Jogo Destruído com Sucesso!")

    def getQuantNum(self):
        return self.__quantNum

    def getQuantResul(self):
        return self.__quantResul

    def getMiniCart(self):
        return self.__miniCart

    def getMaxiCart(self):
        return self.__maxiCart

    def getFaixas(self):
        return self.__faixas

    def getAposta(self):
        return self.__aposta

    def getInvalida(self):
        return self.__invalida

    def setQuantNum(self, quantNum):
        self.__quantNum = quantNum

    def setQuantResul(self, quantResul):
        self.__quantResul = quantResul

    def setMiniCart(self, miniCart):
        self.__miniCart = miniCart

    def setMaxiCart(self, maxiCart):
        self.__maxiCart = maxiCart

    def setFaixas(self, faixas):
        self.__faixas = faixas

    def setAposta(self, aposta):
        self.__aposta = aposta

    def setInvalida(self, invalida):
        self.__invalida = invalida