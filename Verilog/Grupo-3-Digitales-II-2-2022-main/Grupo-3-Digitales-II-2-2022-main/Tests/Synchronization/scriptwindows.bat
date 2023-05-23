	iverilog -o salida.vvp testbench.v
	vvp salida.vvp
	gtkwave SYNC.vcd