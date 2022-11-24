from abc import ABC, abstractmethod

class Veiculo(ABC):
    __modelo = ""
    __tipo = ""
    __potencia = 0.0
    __ano = 0
    __ligado = False
    __engatado = False

    def ligar(self):
        if not self.__ligado:
            self.__ligado = True

            print("O {} {} está sendo ligado!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("O {} {} já está ligado!".format(self.__class__.__name__.lower(), self.__modelo))

    def desligar(self):
        if self.__ligado:
            self.__ligado = False

            print("O {} {} está sendo desligado!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("O {} {} já está desligado!".format(self.__class__.__name__.lower(), self.__modelo))

    def andar(self):
        if self.__ligado:
            if self.__engatado:
                print("O {} {} está andando!".format(self.__class__.__name__.lower(), self.__modelo))
            else:
                print("Engate a marcha do {} {} pra andar com ele!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("Ligue o {} {} para andar com ele!".format(self.__class__.__name__.lower(), self.__modelo))

    def parar(self):
        if self.__ligado:
            print("O {} {} está sendo parado!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("O {} {} está desligado, portanto, está parado!".format(self.__class__.__name__.lower(), self.__modelo))

    def virarEsquerda(self):
        print("O {} {} está virando à esquerda!".format(self.__class__.__name__.lower(), self.__modelo))

    def virarDireita(self):
        print("O {} {} está virando à direita!".format(self.__class__.__name__.lower(), self.__modelo))

    def engatar(self, m):
        if m >= 1 and m <= 5:
            self.__engatado = True

            print("{}ª marcha do {} {} engatada!".format(m, self.__class__.__name__.lower(), self.__modelo))
        else:
            print("Não é possível engatar essa marcha no {} {}.".format(self.__class__.__name__.lower(), self.__modelo))

    def engatarRe(self, r):
        if r.upper() == "R":
            self.__engatado = True

            print("Marcha à ré do {} {} engatada!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("Não é possível engatar essa marcha no {} {}.".format(self.__class__.__name__.lower(), self.__modelo))

    def engatarNeutro(self,):
        if self.__engatado:
            self.__engatado = False

            print("{} {} desengatado!".format(self.__class__.__name__.lower(), self.__modelo))
        else:
            print("O {} {} já está desengatado!.".format(self.__class__.__name__.lower(), self.__modelo))

    def apresentacao(self):
        print("O {} é do modelo {} e do tipo {}.".format(self.__class__.__name__.lower(), self.__modelo, self.__tipo))
        print("A potência dele é de {:.1f} e o ano é de {}.".format(self.__potencia, self.__ano))
        print("-" * 50)

    def __init__(self, modelo, tipo, potencia, ano):
        self.__modelo = modelo
        self.__tipo = tipo
        self.__potencia = potencia
        self.__ano = ano
        self.__ligado = False
        self.__engatado = False

    def __del__(self):
        print("Objeto Veículo Destruído com Sucesso!")

    def getModelo(self):
        return self.__modelo

    def getTipo(self):
        return self.__tipo

    def getPotencia(self):
        return self.__potencia

    def getAno(self):
        return self.__ano

    def getLigado(self):
        return self.__ligado

    def getEngatado(self):
        return self.__engatado

    def setModelo(self, modelo):
        self.__modelo = modelo

    def setTipo(self, tipo):
        self.__tipo = tipo

    def setPotencia(self, potencia):
        self.__potencia = potencia

    def setAno(self, ano):
        self.__ano = ano

    def setLigado(self, ligado):
        self.__ligado = ligado

    def setEngatado(self, engatado):
        self.__engatado = engatado