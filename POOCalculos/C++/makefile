calculos: main.o calculos.o
	g++ main.o calculos.o -o calculos -no-pie

main.o: main.cpp Calculos.h
	g++ -c main.cpp -o main.o

calculos.o: Calculos.cpp Calculos.h
	g++ -c Calculos.cpp -o calculos.o

clean:
	rm -f *.o