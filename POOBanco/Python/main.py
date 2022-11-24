from Cofre import Cofre
from Dinheiro import Dinheiro

moeda25Cent = Dinheiro(0.25, "moeda")
moeda1Real = Dinheiro(1.00, "moeda")
nota5Reais = Dinheiro(5.00, "nota")

moeda25Cent.apresentacao()
moeda1Real.apresentacao()
nota5Reais.apresentacao()

cof = Cofre()

cof.depositar(moeda25Cent)
cof.depositar(nota5Reais)
cof.retirar(5.00)
cof.verificar()

del moeda25Cent
del moeda1Real
del nota5Reais
del cof