CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

unit1: dominion.o unitTest1.c
	gcc -o unitTest1 unitTest1.c -g dominion.o rngs.o  $(CFLAGS)

unit2: dominion.o unitTest2.c
	gcc -o unitTest2 unitTest2.c -g dominion.o rngs.o  $(CFLAGS)

unit3: dominion.o unitTest3.c
	gcc -o unitTest3 unitTest3.c -g dominion.o rngs.o  $(CFLAGS)

unit4: dominion.o unitTest4.c
	gcc -o unitTest4 unitTest4.c -g dominion.o rngs.o  $(CFLAGS)

card1: dominion.o cardTest1.c
	gcc -o cardTest1 cardTest1.c -g dominion.o rngs.o  $(CFLAGS)

card2: dominion.o cardTest2.c
	gcc -o cardTest2 cardTest2.c -g dominion.o rngs.o  $(CFLAGS)

card3: dominion.o cardTest3.c
	gcc -o cardTest3 cardTest3.c -g dominion.o rngs.o  $(CFLAGS)

card4: dominion.o cardTest4.c
	gcc -o cardTest4 cardTest4.c -g dominion.o rngs.o  $(CFLAGS)

allTests: unit1 unit2 unit3 unit4 card1 card2 card3 card4

testResults:
	./unitTest1 &> unittestresult.out
	./unitTest2 >> unittestresult.out
	./unitTest3 >> unittestresult.out
	./unitTest4 >> unittestresult.out
	./cardTest1 >> unittestresult.out
	./cardTest2 >> unittestresult.out
	./cardTest3 >> unittestresult.out
	./cardTest4 >> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

all: allTests testResults

clean:
	rm -f *.o unitTest1 unitTest2 unitTest3 unitTest4 cardTest1 cardTest2 cardTest3 cardTest4 *.gcov *.gcda *.gcno *.so
