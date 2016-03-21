CC = g++
CFLAGS = -Wall -Wextra -g
GMPFLAG = -lgmpxx -lgmp
TRG = test
TST = test
INC = include
SRC = src
VRT = include/virtual
EXE = exec
DOC = doc
LIB = lib

all: $(EXE)/$(TRG)

$(EXE)/$(TRG): $(LIB)/$(TRG).o 
	$(CC) $(CFLAGS) $(LIB)/$(TRG).o -o $(EXE)/$(TRG)

$(LIB)/test.o: $(TST)/test.cpp 
	$(CC) $(CFLAGS) -c $(TST)/$(TRG).cpp -o $(LIB)/$(TRG).o


clean:
	rm $(LIB)/*
	rm $(EXE)/*