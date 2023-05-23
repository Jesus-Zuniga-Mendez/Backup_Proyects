SRC_DIR=./sourcecode/
INCL_DIR= ./include/
BIN_DIR=./binaries/

CC=g++
BIN=binario
CFLAGS=-O3 -Wall -g
LEMONFLAGS = -lemon

all:build run clean

build:
	$(CC) $(LEMONFLAGS) $(CFLAGS) -I $(INCL_DIR) main.cpp -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp
run:
	./script.sh
	#@./$(BIN_DIR)/$(BIN) 1
clean:
	@rm -rf $(BIN_DIR)/$(BIN)
doc:
	rm -r ./documentation/
	doxygen Doxyfile