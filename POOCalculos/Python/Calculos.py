class Calculos:
    @staticmethod
    def quadrado(num):
        if num <= 0:
            raise Exception("Insira um valor maior que zero!")

        return num * num

    @staticmethod
    def cubo(num):
        if num <= 0:
            raise Exception("Insira um valor maior que zero!")

        return num * num * num

    @staticmethod
    def fatorial(num):
        if num <= 0:
            raise Exception("Insira um valor maior que zero!")

        fat = 1
        saida = ""

        while num >= 1:
            fat *= num

            saida += str(num)

            saida += " x " if num > 1 else " = "

            num -= 1

        saida += str(fat)

        return saida

    @staticmethod
    def fibonacci(num):
        if num <= 0:
            raise Exception("Insira um valor maior que zero!")

        t1 = 0
        t2 = 1
        t3 = 0
        cont = 3

        said = "{} → {}".format(t1, t2)

        while cont <= num:
            t3 = t1 + t2
            said += " → {}".format(t3)
            t1 = t2
            t2 = t3
            cont += 1

        said += " → FIM"

        return said