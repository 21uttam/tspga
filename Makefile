# File: Makefile
# Authors: Sam Lebherz (slebher1), Andrew Sillers (andsil1)
# TSP Genetic Algorithm
# CMSC 491, Spring 2010
all: tspga

tspga: tspga.o population.o individual.o Makefile
	g++ -fopenmp tspga.o population.o individual.o -o tspga

tspga.o: tspga.cpp Makefile
	g++ -fopenmp -ansi -Wall -c tspga.cpp

population.o: population.cpp population.h Makefile
	g++ -fopenmp -ansi -Wall -c population.cpp

individual.o: individual.cpp individual.h Makefile
	g++ -fopenmp -ansi -Wall -c individual.cpp

clean:
	rm -rf *.o tspga Otsp* tsp.mas tsp.pul tsp.sol tsp.sav
