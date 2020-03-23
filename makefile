#------------- Oscar Moreira Estévez ------------
main: main.o objects/Board.o objects/Cell.o
	g++ -o main main.cc src/Board.cc src/Cell.cc

objects/main.o: main.cc
	g++ -c main.cc

objects/Board.o: src/Board.cc
	g++ -c src/Board.cc

objects/Cell.o: src/Cell.cc
	g++ -c src/Cell.cc


clean:
	-rm *.o main
