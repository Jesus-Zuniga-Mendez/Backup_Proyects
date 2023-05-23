all: build name clean
build:
	cp estructura.tex compilar.tex
	pdflatex -shell-escape compilar.tex
	bibtex compilar.aux 
	pdflatex -shell-escape compilar.tex
	bibtex compilar.aux 
	pdflatex -shell-escape compilar.tex
clean:
	#rm -r _minted-compilar _minted-estructura *.aux *.fls *.out *.log *.fdb_latexmk
run:
	evince reporte.pdf
name:
	mv compilar.pdf reporte.pdf