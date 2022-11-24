loterias: main.o jogo.o loteria.o random.o
	g++ main.o jogo.o loteria.o random.o -o loterias -no-pie

main.o: main.cpp Jogo.h Loteria.h Random.h
	g++ -c main.cpp -o main.o

jogo.o: Jogo.cpp Jogo.h
	g++ -c Jogo.cpp -o jogo.o

loteria.o: Loteria.cpp Loteria.h
	g++ -c Loteria.cpp -o loteria.o

random.o: Random.cpp Random.h
	g++ -c Random.cpp -o random.o

clean:
	rm -f *.o