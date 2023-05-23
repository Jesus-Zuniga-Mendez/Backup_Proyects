
FILE=main.py
PI=python3
CFLAGS=
SRC=sourcecode
IMPORTS=Imports
FILECLEAN=__pycache__/

all:run clean

run:
	@$(PI) ./$(SRC)/$(FILE)
clean:
	@rm -rf ./$(SRC)/$(IMPORTS)/$(FILECLEAN)
doc:
	rm -r ./documentation/
	doxygen Doxyfile