SRC_DIR=./sourcecode/
INCL_DIR= ./include/
BIN_DIR=./binaries/

CC=g++
BIN=binario
CFLAGS=-O3 -Wall -g
LEMONFLAGS = -lemon

all:build run clean

build:
	$(CXX) $(LEMONFLAGS) $(CFLAGS) -I $(INCL_DIR) main.cpp -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp
run:
	@./$(BIN_DIR)/$(BIN) 20 8 25 2 15 10 17 9 11 100 50 75 40 30
clean:
	@rm -rf $(BIN_DIR)/$(BIN)
doc:
	rm -r ./documentation/
	doxygen Doxyfile