SRC_DIR=./sourcecode/
INCL_DIR= ./include/
BIN_DIR=./binaries/

CC=g++
BIN=main
CFLAGS=-O3 -Wall -g

all:build run clean

build:
	$(CXX) $(CFLAGS) -I $(INCL_DIR) main.cpp -o $(BIN_DIR)$(BIN)
run:
	@./$(BIN_DIR)/$(BIN)
clean:

doc:
	rm -r ./documentation/
	doxygen Doxyfile
