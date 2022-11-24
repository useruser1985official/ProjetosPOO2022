from Carro import Carro
from Moto import Moto
from Caminhao import Caminhao

fusca = Carro("Fusca", "LS", 1.6, 1994)

fusca.ligar()
fusca.engatar(1)
fusca.andar()
fusca.engatar(2)
fusca.virarDireita()
fusca.engatar(3)
fusca.parar()
fusca.engatarNeutro()
fusca.engatar(1)
fusca.andar()
fusca.engatar(2)
fusca.engatar(3)
fusca.parar()
fusca.engatarRe("R")
fusca.andar()
fusca.parar()
fusca.engatarNeutro()
fusca.desligar()
fusca.apresentacao()

f750 = Moto("F 750", "GS", 0.75, 2022)

f750.ligar()
f750.engatar(1)
f750.andar()
f750.engatar(2)
f750.parar()
f750.engatarNeutro()
f750.desligar()
f750.apresentacao()

axor = Caminhao("Axor", "2544", 12.0, 2022)

axor.ligar()
axor.engatarRe("R")
axor.andar()
axor.virarDireita()
axor.parar()
axor.engatar(1)
axor.andar()
axor.engatar(2)
axor.engatar(3)
axor.engatar(4)
axor.engatar(5)
axor.parar()
axor.engatarNeutro()
axor.desligar()
axor.apresentacao()

del fusca
del f750
del axor