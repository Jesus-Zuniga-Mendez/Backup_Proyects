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
	@./$(BIN_DIR)/$(BIN) "8 jsle ( fasd )asd fds{ aefs [fde ]} fd"
	@./$(BIN_DIR)/$(BIN) "8 jsle ( fasd )asd fds{ aefs [fde))>fd"
	@./$(BIN_DIR)/$(BIN) "3 3:2:1"
	@./$(BIN_DIR)/$(BIN) "4 1:1:2:1"
clean:
	@rm -rf $(BIN_DIR)/$(BIN)
doc:
	rm -r ./documentation/
	doxygen Doxyfile