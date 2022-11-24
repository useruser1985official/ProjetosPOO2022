veiculos: main.o caminhao.o carro.o moto.o veiculo.o
	g++ main.o caminhao.o carro.o moto.o veiculo.o -o veiculos -no-pie

main.o: main.cpp Caminhao.h Carro.h Moto.h Veiculo.h
	g++ -c main.cpp -o main.o

caminhao.o: Caminhao.cpp Caminhao.h
	g++ -c Caminhao.cpp -o caminhao.o

carro.o: Carro.cpp Carro.h
	g++ -c Carro.cpp -o carro.o

moto.o: Moto.cpp Moto.h
	g++ -c Moto.cpp -o moto.o

veiculo.o: Veiculo.cpp Veiculo.h
	g++ -c Veiculo.cpp -o veiculo.o

clean:
	rm -f *.o