
###################

all:build run clean

build:
	iverilog -o salida.vvp testbench.v
	vvp salida.vvp
clean:
	
run:
	gtkwave SYNC.vcd
doc:
	