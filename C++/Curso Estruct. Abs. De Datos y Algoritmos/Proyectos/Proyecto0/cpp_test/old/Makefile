SRC_DIR=./sourcecode/
INCL_DIR=./include/
BIN_DIR=./binaries/
DOC= Standar.cpp

CC=g++
BIN=binario
CFLAGS=-O3 -Wall -g
OPENCV= -I.-I/usr/local/include -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -I/usr/include/opencv -I/usr/include/opencv2 -lopencv_calib3d -lopencv_imgproc  -lopencv_core -lopencv_ml -lopencv_features2d -lopencv_objdetect -lopencv_flann -lopencv_video -lopencv_highgui -lopencv_imgcodecs


all:build run clean

build:
	$(CXX) $(DOC) $(CFLAGS) -I.$(INCL_DIR) $(OPENCV) -o $(BIN_DIR)$(BIN)
run:
	@./$(BIN_DIR)/$(BIN) UAACCUUCUACUACGUAG UAACCUUCUACUACGUAGa UAACCUUCUACUACGUAG
clean:
	@rm -rf $(BIN_DIR)/$(BIN)