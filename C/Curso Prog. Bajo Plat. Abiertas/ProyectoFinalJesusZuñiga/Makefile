SRC_DIR=./sourcecode/
INCL_DIR=./include/
INCL_DIRSample=./sample/include/
BIN_DIR=./binaries/
OS := $(shell uname)
ARCH := $(shell uname -m)

CC=g++
BIN=Gestos
BIN2=GuardarGesto
BIN3=ComprobarGesto
CFLAGS=-O3 -Wall -g
###################

ifeq ($(OS), Linux)
  ifeq ($(ARCH), x86_64)
    LEAP_LIBRARY := ./sample/lib/x64/libLeap.so -Wl,-rpath,./lib/x64
  else
    LEAP_LIBRARY := ./sample/lib/x86/libLeap.so -Wl,-rpath,./lib/x86
  endif
endif


all:build run clean

build:
	##@$(CC) $(CFLAGS) -I $(INCL_DIR) -o $(BIN_DIR)/$(BIN) $(SRC_DIR)/*.cpp main.cpp
	$(CXX) $(CFLAGS) -I.$(INCL_DIR) main.cpp -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp
	$(CXX) $(CFLAGS) -I.$(INCL_DIR) ./sample/GuardarGesto.cpp -o ./sample/$(BIN2) $(LEAP_LIBRARY)
	$(CXX) $(CFLAGS) -I.$(INCL_DIR) ./sample/ComprobarGesto.cpp -o ./sample/$(BIN3) $(LEAP_LIBRARY)
run:
	@./$(BIN_DIR)/$(BIN)
clean:
	@rm -rf $(BIN_DIR)/$(BIN)

#$(CXX) $(CFLAGS) -I.$(INCL_DIR) $(SRC_DIR)main.cpp -o $(BIN_DIR)$(BIN) $(LEAP_LIBRARY)
#g++ -O3 -Wall -g -I../include ./sourcecode/main.cpp -o ./Gestos ./lib/x64/libLeap.so -Wl,-rpath,./lib/x6