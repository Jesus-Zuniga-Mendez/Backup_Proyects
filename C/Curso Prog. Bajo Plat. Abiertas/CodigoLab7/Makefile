SRC_DIR=./sourcecode
INCL_DIR=./include
BIN_DIR=./binaries
DOC_DIR=./documentation
RSC_DIR=./resources/Laberintos

CC=gcc
BIN=listas.out
CFLAGS=-O3 -g

##Descomentar uno de los dos en caso de querer cambiar de laberinto por defecto
#LABERINTO=laberinto
LABERINTO=laberinto2
###################

all:build run clean

build:
	@$(CC) $(CFLAGS) -I $(INCL_DIR) -o $(BIN_DIR)/$(BIN) $(SRC_DIR)/*.c main.c
	@sleep 1
clean:
	#@rm -rf $(BIN_DIR)/$(BIN)

run:
	@./$(BIN_DIR)/$(BIN) $(RSC_DIR)/$(LABERINTO)

doc: