SRC_DIR=./sourcecode/
INCL_DIR=./include/
BIN_DIR=./binaries/

DOC= main.cpp
CPC=g++
########################
BIN=proyecto0
IMAGEN = ./resources/bordes.jpg
IMAGEN2 = ./resources/blancoynegro.jpeg
IMAGEN3 = ./resources/guason.jpg
OPERACION = operacion
SALIDA = jpeg
SALIDA2 = jpeg
#######################
CFLAGS=-O3 -Wall -g
OPENCV= -I.-I/usr/local/include -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -I/usr/include/opencv -I/usr/include/opencv2 -lopencv_calib3d -lopencv_imgproc  -lopencv_core -lopencv_ml -lopencv_features2d -lopencv_objdetect -lopencv_flann -lopencv_video -lopencv_highgui -lopencv_imgcodecs
IMAGENMAGICKFLAGS = `Magick++-config --cxxflags --cppflags`
IMAGENMAGICKFLAGS2 = `Magick++-config --ldflags --libs`


all:build run clean

build:
	$(CPC) $(DOC) $(CFLAGS) -I.$(INCL_DIR) $(OPENCV) $(IMAGENMAGICKFLAGS) -o $(BIN_DIR)$(BIN) $(SRC_DIR)/*.cpp $(IMAGENMAGICKFLAGS2)
run:
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) I $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) FG $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) FSTD $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) G $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) MB $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) SAP $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) E $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) D $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN) ED $(SALIDA)
	##
	##
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) I $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) FG $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) FSTD $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) G $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) MB $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) SAP $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) E $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) D $(SALIDA)
	#@./$(BIN_DIR)/$(BIN) $(IMAGEN2) ED $(SALIDA)
	###
	###
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) I $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) FG $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) FSTD $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) G $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) MB $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) SAP $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) E $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) D $(SALIDA2)
	@./$(BIN_DIR)/$(BIN) $(IMAGEN3) ED $(SALIDA2)
clean:
	@rm -rf $(BIN_DIR)/$(BIN)