CC = g++
#CFLAGS = -Wall -Wextra
INC = include
SRC = src
VRT = include/virtual
EXE = exec
DOC = doc
LIB = lib

$(EXE)/test: $(LIB)/test.o 
	$(CC) $(CFLAGS) $(LIB)/test.o 

$(LIB)/test.o: $(SRC)/test.cpp 
	$(CC) $(CFLAGS) -c $(SRC)/test.cpp -o $(LIB)/test.o


clean:
	rm -rf $(LIB)/*.o