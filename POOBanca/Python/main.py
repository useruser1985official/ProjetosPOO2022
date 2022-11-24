from Revista import Revista
from Hq import Hq
from Jornal import Jornal
from Livro import Livro
from Banca import Banca

veja = Revista("Veja", "Abril", 200, 2564)
caras = Revista("Caras", "Abril", 250, 1948)

veja.abrir()
veja.avancarPag()
veja.folhear(50)
# veja.apresentacao()

superman = Hq("Superman", "Panini", 96, 47)
batman = Hq("Batman", "Panini", 96, 47)
liga = Hq("Liga da Justiça", "Panini", 96, 47)

# superman.apresentacao()
# batman.apresentacao()

dgabc = Jornal("Diário do Grande ABC", "DGABC", 300, True)
folha = Jornal("Folha de São Paulo", "Grupo Folha", 400, True)

# dgabc.apresentacao()

inic = Livro("Python para Iniciantes", "Tecno", 250)
objet = Livro("Orientação a Objetos em Python", "Tecno", 300)
avanc = Livro("Python Avançado", "Tecno", 400)

# inic.apresentacao()
# objet.apresentacao()

print("-" * 50)

banc = Banca(veja, superman, dgabc, folha, objet)

banc.apresentacao()

del veja
del caras
del superman
del batman
del liga
del dgabc
del folha
del inic
del objet
del avanc
del banc