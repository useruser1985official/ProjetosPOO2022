banco: main.o cofre.o dinheiro.o guardado.o valor.o
	g++ main.o cofre.o dinheiro.o guardado.o valor.o -o banco -no-pie

main.o: main.cpp Cofre.h Dinheiro.h Guardado.h Valor.h
	g++ -c main.cpp -o main.o

cofre.o: Cofre.cpp Cofre.h
	g++ -c Cofre.cpp -o cofre.o

dinheiro.o: Dinheiro.cpp Dinheiro.h
	g++ -c Dinheiro.cpp -o dinheiro.o

guardado.o: Guardado.cpp Guardado.h
	g++ -c Guardado.cpp -o guardado.o

valor.o: Valor.cpp Valor.h
	g++ -c Valor.cpp -o valor.o

clean:
	rm -f *.o