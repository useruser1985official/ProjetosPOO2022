genericos: main.o generico.o gerador.o
	g++ main.o generico.o gerador.o -o genericos -no-pie

main.o: main.cpp Generico.h Gerador.h
	g++ -c main.cpp -o main.o

generico.o: Generico.cpp Generico.h
	g++ -c Generico.cpp -o generico.o

gerador.o: Gerador.cpp Gerador.h
	g++ -c Gerador.cpp -o gerador.o

clean:
	rm -f *.o