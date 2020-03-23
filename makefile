#------------- Oscar Moreira Estévez ------------
main: main.o objects/Tablero.o objects/Celula.o
	g++ -o main main.cc src/Tablero.cc src/Celula.cc

objects/main.o: main.cc
	g++ -c main.cc

objects/Tablero.o: src/Tablero.cc
	g++ -c src/Tablero.cc

objects/Celula.o: src/Celula.cc
	g++ -c src/Celula.cc


clean:
	-rm *.o main
