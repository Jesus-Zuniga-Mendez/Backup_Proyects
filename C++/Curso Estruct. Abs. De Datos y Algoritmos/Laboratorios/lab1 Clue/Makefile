SRC_DIR=./sourcecode/
INCL_DIR= ./include/
BIN_DIR=./binaries/

CC=g++
BIN=binario
CFLAGS=-O3 -Wall -g

all:build run clean

build:
	$(CXX) $(CFLAGS) -I $(INCL_DIR) main.cpp -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp
run:
	@./$(BIN_DIR)/$(BIN)
clean:
	@rm -rf $(BIN_DIR)/$(BIN)
doc:
	rm -r ./documentation/
	doxygen Doxyfile