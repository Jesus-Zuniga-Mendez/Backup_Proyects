all: build name clean
build:
	cp estructura.tex compilar.tex
	pdflatex -shell-escape compilar.tex
	bibtex compilar.aux 
	pdflatex -shell-escape compilar.tex
	bibtex compilar.aux 
	pdflatex -shell-escape compilar.tex
clean:
	mkdir respaldo
	mv *.tex ./respaldo
	mv *.bib ./respaldo
	mv reporte.pdf ./respaldo
	rm *.*
	rm -r _minted-compilar
	mv ./respaldo/*.tex ./
	mv ./respaldo/*.bib ./
	mv ./respaldo/reporte.pdf ./
	rm -r respaldo
run:
	evince reporte.pdf
name:
	mv compilar.pdf reporte.pdf