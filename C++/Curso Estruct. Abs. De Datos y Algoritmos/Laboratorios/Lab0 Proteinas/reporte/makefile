all: build name clean
build:
	cp estructura.tex compilar.tex
	pdflatex -shell-escape compilar.tex
	bibtex compilar.aux 
	pdflatex -shell-escape compilar.tex
clean:
	rm compilar.*
run:
	evince reporte.pdf
name:
	mv compilar.pdf reporte.pdf