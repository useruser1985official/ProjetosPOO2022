from Calculos import Calculos

num = int(input("Digite um número inteiro: "))

try:
    print("Quadrado de {}: {}.".format(num, Calculos.quadrado(num)))
    print("Cubo de {}: {}.".format(num, Calculos.cubo(num)))
    print("Fatorial de {}: {}.".format(num, Calculos.fatorial(num)))
    print("Fibonacci de {}: {}.".format(num, Calculos.fibonacci(num)))
except Exception as ex:
    print("ERRO: {}".format(ex))