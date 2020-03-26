#------------- Oscar Moreira Estévez ------------
main: main.o Board.o Cell.o Cell1.o Cell2.o Cell3.o
	g++ -o main main.cc src/Board.cc src/Cell.cc src/Cell1.cc src/Cell2.cc src/Cell3.cc

main.o: main.cc
	g++ -c main.cc

Board.o: src/Board.cc
	g++ -c src/Board.cc

Cell.o: src/Cell.cc
	g++ -c src/Cell.cc

Cell1.o: src/Cell1.cc
	        g++ -c src/Cell1.cc

Cell2.o: src/Cell2.cc
	        g++ -c src/Cell2.cc

Cell3.o: src/Cell3.cc
	        g++ -c src/Cell3.cc

clean:
	-rm *.o main
