CC = g++
#CFLAGS = -Wall -Wextra
INC = include
SRC = src
VRT = include/virtual
EXE = exec
DOC = doc
LIB = lib

$(EXE)/test: $(LIB)/test.o $(LIB)/vector.o
	$(CC) $(CFLAGS) $(LIB)/test.o $(LIB)/vector.o

$(LIB)/test.o: $(SRC)/test.cpp $(INC)/vector.h
	$(CC) $(CFLAGS) -c $(SRC)/test.cpp -o $(LIB)/test.o

$(LIB)/vector.o: $(INC)/vector.h $(SRC)/vector.cpp
	$(CC) $(CFLAGS) -c $(SRC)/vector.cpp -o $(LIB)/vector.o 


clean:
	rm -rf *.o