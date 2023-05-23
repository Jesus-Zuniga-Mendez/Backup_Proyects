SRC_DIR=./sourcecode
INCL_DIR=./include
BIN_DIR=./binaries
DOC_DIR=./documentation

CC=gcc
BIN=listas.out
CFLAGS=-O3 -g
###################

all:build run clean

build:
	@$(CC) $(CFLAGS) -I $(INCL_DIR) -o $(BIN_DIR)/$(BIN) $(SRC_DIR)/*.c main.c
	@sleep 1
clean:
	#@rm -rf $(BIN_DIR)/$(BIN)

run:
	@./$(BIN_DIR)/$(BIN)

doc: