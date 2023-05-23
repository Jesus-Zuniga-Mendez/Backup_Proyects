SRC_DIR=./sourcecode/
INCL_DIR=./include/
BIN_DIR=./binaries/

DOC= main.cpp
CPC=g++
########################
BIN=proyecto1
IMAGEN = ./resources/OBJETOS.JPG
IMAGEN3 = ./resources/OBJETOS2.jpeg
IMAGEN4 = ./resources/OBJETOS3.jpeg
IMAGEN2 = ./resources/raro.jpeg
IMAGEN5 = ./resources/output-onlinemathtools.png
IMAGEN6 = ./resources/output-onlinemathtools1.png
IMAGEN7 = ./resources/i.png
OPERACION = operacion
SALIDA = jpeg
#######################
CFLAGS=-O3 -Wall -g
OPENCV= -I.-I/usr/local/include -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -I/usr/include/opencv -I/usr/include/opencv2 -lopencv_calib3d -lopencv_imgproc  -lopencv_core -lopencv_ml -lopencv_features2d -lopencv_objdetect -lopencv_flann -lopencv_video -lopencv_highgui -lopencv_imgcodecs
IMAGENMAGICKFLAGS = `Magick++-config --cxxflags --cppflags`
IMAGENMAGICKFLAGS2 = `Magick++-config --ldflags --libs`


all:build run clean

build:
	$(CPC) $(DOC) $(CFLAGS) -I.$(INCL_DIR) $(OPENCV) $(IMAGENMAGICKFLAGS) -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp $(IMAGENMAGICKFLAGS2)
run:
	@./$(BIN_DIR)/$(BIN) $(IMAGEN7) M $(SALIDA)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN7) R $(SALIDA)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN7) P $(SALIDA)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN7) S $(SALIDA)
clean:
	@rm -rf $(BIN_DIR)/$(BIN)