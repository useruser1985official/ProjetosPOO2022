banca: main.o banca.o hq.o jornal.o livro.o ponto.o produto.o revista.o
	g++ main.o banca.o hq.o jornal.o livro.o ponto.o produto.o revista.o -o banca -no-pie

main.o: main.cpp Banca.h Hq.h Jornal.h Livro.h Ponto.h Produto.h Revista.h
	g++ -c main.cpp -o main.o

banca.o: Banca.cpp Banca.h
	g++ -c Banca.cpp -o banca.o

hq.o: Hq.cpp Hq.h
	g++ -c Hq.cpp -o hq.o

jornal.o: Jornal.cpp Jornal.h
	g++ -c Jornal.cpp -o jornal.o

livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp -o livro.o

ponto.o: Ponto.cpp Ponto.h
	g++ -c Ponto.cpp -o ponto.o

produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp -o produto.o

revista.o: Revista.cpp Revista.h
	g++ -c Revista.cpp -o revista.o

clean:
	rm -f *.o