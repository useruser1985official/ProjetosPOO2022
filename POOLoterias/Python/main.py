from Jogo import Jogo

linha = lambda: print("-=" * 50)

faiLoto = (11, 12, 13, 14, 15)
lotofacil = Jogo(15, 15, 1, 25, faiLoto)
apLoto = (1, 3, 4, 6, 8, 9, 10, 11, 12, 15, 17, 18, 21, 23, 25)

lotofacil.fazerAposta(apLoto)
lotofacil.sorteio()

linha()

faiQui = (2, 3, 4, 5)
quina = Jogo(5, 5, 1, 80, faiQui)
apQui = (5, 20, 23, 53, 80)

quina.fazerAposta(apQui)
quina.sorteio()

linha()

faiSe = (4, 5, 6)
mega = Jogo(6, 6, 1, 60, faiSe)
apSe = (10, 24, 30, 36, 51, 53)

mega.fazerAposta(apSe)
mega.sorteio()

del lotofacil
del quina
del mega